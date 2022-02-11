#pragma once

#include "../../type/core/shader_name.hpp"

namespace agl::api::opengl {

inline
void
CompileShader(
    ShaderName shader)
{
    glCompileShader(
        shader);
}

}
