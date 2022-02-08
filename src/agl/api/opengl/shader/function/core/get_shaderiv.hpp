#pragma once

#include "../../type/shader_name.hpp"

namespace agl::opengl {

inline
void
GetShaderiv(
    ShaderName shader,
    GLenum pname,
    GLint* params)
{
    glGetShaderiv(
        shader,
        pname,
        params);
}

}
