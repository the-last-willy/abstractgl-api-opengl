#pragma once

#include "../../type/buffer_name.hpp"

namespace agl::api::opengl {

// The return type if obviously inadequate.
// Might be multiple values ?
// A boolean could be a better fit ?
inline
GLint GetNamedBufferParameter(
    BufferName buffer,
    GLenum pname)
{
    GLint params;
    glGetNamedBufferParameteriv(buffer, pname, &params);
    return params;
}

}
