#pragma once

namespace agl::opengl {

struct EnumComputeShader {
    static constexpr auto _enum = GL_COMPUTE_SHADER;

    constexpr
    operator GLenum() const noexcept {
        return _enum;
    }
} constexpr COMPUTE_SHADER;

}
