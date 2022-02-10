#pragma once

#include "../../../program/type/attribute_location.hpp"
#include "../../type/vertex_array_name.hpp"

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
