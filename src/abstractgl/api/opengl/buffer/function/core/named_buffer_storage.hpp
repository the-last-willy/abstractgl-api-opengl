#pragma once

#include "../../type/core/buffer_name.hpp"

#include <concepts>
#include <initializer_list>

namespace agl::api::opengl {

inline
void NamedBufferStorage(
    BufferName buffer,
    GLsizei size,
    const GLvoid* data,
    GLenum flags)
{
    glNamedBufferStorage(
        buffer,
        size,
        data,
        flags);
}

}
