#pragma once

namespace agl::api::opengl {

struct {
    constexpr
    operator GLenum() const noexcept {
        return GL_SHADER_STORAGE_BUFFER;
    }
}
constexpr SHADER_STORAGE_BUFFER;

}
