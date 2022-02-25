#pragma once

#include "../../type/core/buffer_name.hpp"

namespace agl::api::opengl {

inline
void GetNamedBufferParameteriv(
    BufferName buffer,
    GLenum pname,
    GLint* data)
{
    glGetNamedBufferParameteriv(buffer, pname, data);
}

}
