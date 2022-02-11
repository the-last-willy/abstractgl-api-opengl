#pragma once

#include "../../../program/type/core/attribute_location.hpp"
#include "../../type/core/vertex_array_name.hpp"

namespace agl::api::opengl {

inline
void
VertexArrayAttribBinding(
    VertexArrayName vaobj,
    AttribLoc attribindex,
    GLuint bindingindex)
{
    glVertexArrayAttribBinding(
        vaobj,
        attribindex,
        bindingindex);
}

}
