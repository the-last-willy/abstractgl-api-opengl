#pragma once

#include "../../../program/type/core/attribute_location.hpp"
#include "../../type/core/vertex_array_name.hpp"

namespace agl::api::opengl {

inline
void
VertexArrayAttribFormat(
    VertexArrayName vaobj,
    AttribLoc attribindex,
    GLint size,
	GLenum type,
	GLboolean normalized,
	GLuint relativeoffset)
{
    glVertexArrayAttribFormat(
        vaobj,
        attribindex,
        size,
        type,
        normalized,
        relativeoffset);
}

}
