#pragma once

#include "../../../program/type/attribute_location.hpp"
#include "../../type/vertex_array_name.hpp"

namespace agl::api::opengl {

inline
void
EnableVertexArrayAttrib(
    VertexArrayName vaobj,
    AttribLoc attribindex)
{
    glEnableVertexArrayAttrib(
        vaobj,
        attribindex);
}

}
