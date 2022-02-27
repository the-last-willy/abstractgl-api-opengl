#pragma once

#include "../../type/core/framebuffer_name.hpp"

namespace agl::api::opengl {

inline
void ClearNamedFramebufferiv(
    FramebufferName framebuffer,
	GLenum buffer,
	GLint drawbuffer,
	const GLint* value)
{
    glClearNamedFramebufferiv(
        framebuffer,
        buffer,
        drawbuffer,
        value);
}

}
