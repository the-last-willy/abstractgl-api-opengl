#pragma once

#include "../../type/shader_name.hpp"

namespace agl::opengl {

inline
void
ShaderSource(
    ShaderName shader,
    GLsizei count,
    const GLchar** string,
	const GLint* length)
{
    glShaderSource(
        shader,
        count,
        string,
        length);
}

}
