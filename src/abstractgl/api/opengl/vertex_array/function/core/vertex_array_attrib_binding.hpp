#pragma once

#include "../../../program/type/attribute_location.hpp"
#include "../../type/vertex_array_name.hpp"

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
