#pragma once

#include "../../type/core/vertex_array_name.hpp"

namespace agl::api::opengl {

inline
void
BindVertexArray(
    VertexArrayName vaobj)
{
    glBindVertexArray(
        vaobj);
}

}
