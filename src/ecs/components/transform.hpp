#pragma once

#include "ecs/component.hpp"
#include "glm/glm/ext/quaternion_float.hpp"
#include "glm/glm/ext/vector_float3.hpp"

namespace teeny
{
    struct Transform : Component
    {
        glm::vec3 position;
        glm::quat rotation;
    };
}