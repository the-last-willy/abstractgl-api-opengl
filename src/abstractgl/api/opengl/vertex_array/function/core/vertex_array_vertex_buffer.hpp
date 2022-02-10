#pragma once

#include "../../../buffer/buffer.hpp"
#include "../../type/vertex_array_name.hpp"

namespace agl::opengl {

inline
void
VertexArrayVertexBuffer(
    VertexArrayName vaobj,
    GLuint bindingindex,
    const BufferObj& buffer,
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
