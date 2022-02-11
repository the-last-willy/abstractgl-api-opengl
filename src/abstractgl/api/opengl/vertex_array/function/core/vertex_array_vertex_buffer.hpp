#pragma once

#include "../../../buffer/type/core/buffer_name.hpp"
#include "../../type/vertex_array_name.hpp"

namespace agl::api::opengl {

inline
void
VertexArrayVertexBuffer(
    VertexArrayName vaobj,
    GLuint bindingindex,
    BufferName buffer,
	GLintptr offset,
	GLsizei stride)
{
    glVertexArrayVertexBuffer(
        vaobj,
        bindingindex,
        buffer,
        offset,
        stride);
}

}
