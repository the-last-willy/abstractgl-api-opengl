#pragma once

#include "../../type/core/framebuffer_name.hpp"

namespace agl::api::opengl {

inline
void ClearNamedFramebufferfv(
    FramebufferName framebuffer,
	GLenum buffer,
	GLint drawbuffer,
	const GLfloat* value)
{
    glClearNamedFramebufferfv(
        framebuffer,
        buffer,
        drawbuffer,
        value);
}

}
