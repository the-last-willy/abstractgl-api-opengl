#pragma once

namespace agl::api::opengl {

struct {
    constexpr
    operator GLenum() const noexcept {
        return GL_COLOR;
    }
}
constexpr COLOR;

}
