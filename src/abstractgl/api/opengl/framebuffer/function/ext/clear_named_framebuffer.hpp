#pragma once

#include "../../enum/color.hpp"
#include "../../enum/depth.hpp"
#include "../../enum/stencil.hpp"
#include "../../type/core/framebuffer_name.hpp"
#include "../core/clear_named_framebuffer_fv.hpp"
#include "../core/clear_named_framebuffer_iv.hpp"

namespace agl::api::opengl {

inline
void ClearNamedFramebuffer(
    FramebufferName framebuffer,
	decltype(COLOR) buffer,
    GLint drawbuffer, 
	const GLfloat value[4])
{
    ClearNamedFramebufferfv(
        framebuffer,
        buffer,
        drawbuffer,
        value);
}

inline
void ClearNamedFramebuffer(
    FramebufferName framebuffer,
	decltype(DEPTH) buffer,
	GLfloat value)
{
    ClearNamedFramebufferfv(
        framebuffer,
        buffer,
        0,
        &value);
}

inline
void ClearNamedFramebuffer(
    FramebufferName framebuffer,
	decltype(STENCIL) buffer,
	GLint value)
{
    ClearNamedFramebufferiv(
        framebuffer,
        buffer,
        0,
        &value);
}

}
