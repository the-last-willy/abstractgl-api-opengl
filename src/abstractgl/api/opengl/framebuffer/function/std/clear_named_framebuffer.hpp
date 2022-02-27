#pragma once

#include "../../enum/color.hpp"
#include "../../type/core/framebuffer_name.hpp"
#include "../ext/clear_named_framebuffer.hpp"

#include <array>

namespace agl::api::opengl {

inline
void ClearNamedFramebuffer(
    FramebufferName framebuffer,
	decltype(COLOR) buffer,
    GLint drawbuffer, 
	std::array<GLfloat, 4> value)
{
    ClearNamedFramebufferfv(
        framebuffer,
        buffer,
        drawbuffer,
        data(value));
}

}
