#pragma once

namespace agl::api::opengl {

struct EnumFragmentShader {
    static constexpr auto _enum = GL_FRAGMENT_SHADER;

    constexpr
    operator GLenum() const noexcept {
        return _enum;
    }
} constexpr FRAGMENT_SHADER;

}
