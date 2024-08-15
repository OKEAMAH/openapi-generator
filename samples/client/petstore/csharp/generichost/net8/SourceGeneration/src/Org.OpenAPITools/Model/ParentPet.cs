// <auto-generated>
/*
 * OpenAPI Petstore
 *
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

#nullable enable

using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.ComponentModel.DataAnnotations;
using OpenAPIClientUtils = Org.OpenAPITools.Client.ClientUtils;
using System.Text.Json.Serialization.Metadata;
using Org.OpenAPITools.Client;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// ParentPet
    /// </summary>
    public partial class ParentPet : GrandparentAnimal, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ParentPet" /> class.
        /// </summary>
        [JsonConstructor]
        public ParentPet() : base()
        {
            OnCreated();
        }

        partial void OnCreated();

        /// <summary>
        /// The discriminator
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public new string PetType { get; } = "ParentPet";

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class ParentPet {\n");
            sb.Append("  ").Append(base.ToString()?.Replace("\n", "\n  ")).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }

    /// <summary>
    /// A Json converter for type <see cref="ParentPet" />
    /// </summary>
    public class ParentPetJsonConverter : JsonConverter<ParentPet>
    {
        /// <summary>
        /// Deserializes json to <see cref="ParentPet" />
        /// </summary>
        /// <param name="utf8JsonReader"></param>
        /// <param name="typeToConvert"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <returns></returns>
        /// <exception cref="JsonException"></exception>
        public override ParentPet Read(ref Utf8JsonReader utf8JsonReader, Type typeToConvert, JsonSerializerOptions jsonSerializerOptions)
        {
            int currentDepth = utf8JsonReader.CurrentDepth;

            if (utf8JsonReader.TokenType != JsonTokenType.StartObject && utf8JsonReader.TokenType != JsonTokenType.StartArray)
                throw new JsonException();

            JsonTokenType startingTokenType = utf8JsonReader.TokenType;

            Option<string?> petType = default;

            string? discriminator = ClientUtils.GetDiscriminator(utf8JsonReader, "pet_type");

            if (discriminator != null && discriminator.Equals("ChildCat"))
                return JsonSerializer.Deserialize<ChildCat>(ref utf8JsonReader, jsonSerializerOptions) ?? throw new JsonException("The result was an unexpected value.");

            while (utf8JsonReader.Read())
            {
                if (startingTokenType == JsonTokenType.StartObject && utf8JsonReader.TokenType == JsonTokenType.EndObject && currentDepth == utf8JsonReader.CurrentDepth)
                    break;

                if (startingTokenType == JsonTokenType.StartArray && utf8JsonReader.TokenType == JsonTokenType.EndArray && currentDepth == utf8JsonReader.CurrentDepth)
                    break;

                if (utf8JsonReader.TokenType == JsonTokenType.PropertyName && currentDepth == utf8JsonReader.CurrentDepth - 1)
                {
                    string? localVarJsonPropertyName = utf8JsonReader.GetString();
                    utf8JsonReader.Read();

                    switch (localVarJsonPropertyName)
                    {
                        case "pet_type":
                            petType = new Option<string?>(utf8JsonReader.GetString()!);
                            break;
                        default:
                            break;
                    }
                }
            }

            if (!petType.IsSet)
                throw new ArgumentException("Property is required for class ParentPet.", nameof(petType));

            if (petType.IsSet && petType.Value == null)
                throw new ArgumentNullException(nameof(petType), "Property is not nullable for class ParentPet.");

            return new ParentPet();
        }

        /// <summary>
        /// Serializes a <see cref="ParentPet" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="parentPet"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public override void Write(Utf8JsonWriter writer, ParentPet parentPet, JsonSerializerOptions jsonSerializerOptions)
        {
            if (parentPet is ChildCat childCat){
                JsonSerializer.Serialize<ChildCat>(writer, childCat, jsonSerializerOptions);
                return;
            }

            writer.WriteStartObject();

            WriteProperties(writer, parentPet, jsonSerializerOptions);
            writer.WriteEndObject();
        }

        /// <summary>
        /// Serializes the properties of <see cref="ParentPet" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="parentPet"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public void WriteProperties(Utf8JsonWriter writer, ParentPet parentPet, JsonSerializerOptions jsonSerializerOptions)
        {
            writer.WriteString("pet_type", parentPet.PetType);
        }
    }

    /// <summary>
    /// The ParentPetSerializationContext
    /// </summary>
    [JsonSourceGenerationOptions(WriteIndented = true, GenerationMode = JsonSourceGenerationMode.Metadata | JsonSourceGenerationMode.Serialization)]
    [JsonSerializable(typeof(ParentPet))]
    public partial class ParentPetSerializationContext : JsonSerializerContext { }
}
