#pragma once

namespace agl::api::opengl {

struct {
    constexpr
    operator GLenum() const noexcept {
        return GL_BUFFER_SIZE;
    }
}
constexpr BUFFER_SIZE;

}
