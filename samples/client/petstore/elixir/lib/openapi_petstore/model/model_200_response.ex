# NOTE: This file is auto generated by OpenAPI Generator 7.9.0-SNAPSHOT (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule OpenapiPetstore.Model.Model200Response do
  @moduledoc """
  Model for testing model name starting with number
  """

  @derive Jason.Encoder
  defstruct [
    :name,
    :class
  ]

  @type t :: %__MODULE__{
    :name => integer() | nil,
    :class => String.t | nil
  }

  def decode(value) do
    value
  end
end

