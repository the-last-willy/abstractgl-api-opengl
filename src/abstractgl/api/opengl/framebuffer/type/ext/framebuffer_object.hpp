#pragma once

#include "../../function/ext/create_framebuffer.hpp"
#include "../core/framebuffer_name.hpp"

namespace agl::api::opengl {

// - RAII.
class FramebufferObj : public FramebufferName {
public:
    FramebufferObj()
        : FramebufferName(CreateFramebuffer())
    {}

    FramebufferObj(const FramebufferObj&) = delete;
    
    FramebufferObj(FramebufferObj&& f)
        : FramebufferName(f)
    {
        static_cast<FramebufferName&>(f) = FramebufferName(0);
    }

    ~FramebufferObj() noexcept {
        GLuint id = static_cast<GLuint>(*this);
        glDeleteFramebuffers(1, &id);
    }

    FramebufferObj& operator=(const FramebufferObj&) = delete;

    FramebufferObj& operator=(FramebufferObj&& f) {
        GLuint id = static_cast<GLuint>(*this);
        glDeleteFramebuffers(1, &id);
        static_cast<FramebufferName&>(*this) = static_cast<FramebufferName&>(f);
        static_cast<FramebufferName&>(f) = FramebufferName(0);
        return *this;
    }
};

}
