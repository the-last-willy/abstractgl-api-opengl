#pragma once

namespace agl::api::opengl {

struct EnumInfoLogLength {
    constexpr
    operator GLenum() const noexcept {
        return GL_COMPILE_STATUS;
    }
}
constexpr INFO_LOG_LENGTH;

}
