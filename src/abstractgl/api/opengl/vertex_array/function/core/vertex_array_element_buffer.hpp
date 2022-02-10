#pragma once

#include "../../../buffer/buffer.hpp"
#include "../../type/vertex_array_name.hpp"

namespace agl::opengl {

inline
void
VertexArrayElementBuffer(
    VertexArrayName vaobj,
    const BufferObj& buffer)
{
    glVertexArrayElementBuffer(
        vaobj,
        buffer);
}

}
