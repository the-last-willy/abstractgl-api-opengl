#pragma once

namespace agl::api::opengl {

inline
void
DrawElements(
    GLenum mode,
    GLsizei count,
    GLenum type,
    const GLvoid* indices)
{
    glDrawElements(
        mode,
        count,
        type,
        indices);
}

}
