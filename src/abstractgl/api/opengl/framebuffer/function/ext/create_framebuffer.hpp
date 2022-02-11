#pragma once

#include "../../type/core/framebuffer_name.hpp"

namespace agl::api::opengl {

inline 
FramebufferName
CreateFramebuffer() {
    GLuint id;
    glCreateFramebuffers(1, &id);
    return FramebufferName(id);
}

}
