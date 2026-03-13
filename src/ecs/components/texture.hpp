#pragma once

#include "ecs/component.hpp"
#include "glm/glm/ext/vector_int2.hpp"
#include "glad/glad.h"

namespace teeny
{
    struct Texture : Component
    {
        GLint glId;
        glm::ivec2 size;
    };
}