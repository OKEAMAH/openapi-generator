/**
 * Schemas with different types of composition for testing models generation
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


export interface DogComposedModel { 
    petType: string;
    inlineBreed?: DogComposedModelInlineBreedEnum;
}
export enum DogComposedModelInlineBreedEnum {
    Dingo = 'Dingo',
    Husky = 'Husky'
};



