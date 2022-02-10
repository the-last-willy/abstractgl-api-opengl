#pragma once

namespace agl::opengl {

struct EnumCompileStatus {
    constexpr
    operator GLenum() const noexcept {
        return GL_COMPILE_STATUS;
    }
}
constexpr COMPILE_STATUS;

}
