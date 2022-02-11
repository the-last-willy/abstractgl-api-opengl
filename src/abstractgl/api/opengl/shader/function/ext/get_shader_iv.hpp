#pragma once

#include "../core/get_shader_iv.hpp"

namespace agl::api::opengl {

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
