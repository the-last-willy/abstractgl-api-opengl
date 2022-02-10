#pragma once

#include "../../../buffer/buffer.hpp"
#include "../../type/vertex_array_name.hpp"

namespace agl::opengl {

inline
void
VertexArrayElementBuffer(
    VertexArrayName vaobj,
    const Buffer& buffer)
{
    glVertexArrayElementBuffer(
        vaobj,
        buffer);
}

}
