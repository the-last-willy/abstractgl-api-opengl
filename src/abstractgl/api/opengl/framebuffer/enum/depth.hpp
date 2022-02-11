#pragma once

namespace agl::api::opengl {

struct {
    constexpr
    operator GLenum() const noexcept {
        return GL_DEPTH;
    }
}
constexpr DEPTH;

}
