#pragma once

#include "../../enum/depth.hpp"
#include "../../type/core/framebuffer_name.hpp"
#include "../core/clear_named_framebuffer_fv.hpp"

namespace agl::api::opengl {

inline
void ClearNamedFramebuffer(
    FramebufferName framebuffer,
	decltype(DEPTH),
	GLfloat value)
{
    glClearNamedFramebufferfv(
        framebuffer,
        DEPTH,
        0,
        &value);
}

}
