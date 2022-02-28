#pragma once

namespace agl::api::opengl {

inline
void
DrawArrays(
    GLenum mode,
    GLint first,
    GLsizei count)
{
    glDrawArrays(
		mode,
		first,
		count);
}

}
