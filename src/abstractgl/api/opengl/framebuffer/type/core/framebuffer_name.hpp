#pragma once

#include "../../../common/enum/zero.hpp"

namespace agl::api::opengl {

class FramebufferName {
    GLuint name = 0;

public:
    FramebufferName() = delete;

    explicit
    FramebufferName(GLuint name) 
        : name(name)
    {}

    FramebufferName(decltype(ZERO))
        : name(0)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
