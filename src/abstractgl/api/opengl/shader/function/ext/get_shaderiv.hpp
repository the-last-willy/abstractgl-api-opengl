#pragma once

#include "../core/get_shaderiv.hpp"

namespace agl::opengl {

inline
GLint
GetShaderiv(
    ShaderName shader,
    GLenum pname)
{
    GLint param;
    GetShaderiv(
        shader,
        pname,
        &param);
    return param;
}

}
