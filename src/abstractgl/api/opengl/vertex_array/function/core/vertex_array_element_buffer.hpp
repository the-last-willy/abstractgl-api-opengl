#pragma once

#include "../../../buffer/type/core/buffer_name.hpp"
#include "../../type/core/vertex_array_name.hpp"

namespace agl::api::opengl {

inline
void
VertexArrayElementBuffer(
    VertexArrayName vaobj,
    BufferName buffer)
{
    glVertexArrayElementBuffer(
        vaobj,
        buffer);
}

}
