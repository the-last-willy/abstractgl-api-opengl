#pragma once

namespace agl::api::opengl {

struct EnumVertexShader {
    static constexpr auto _enum = GL_VERTEX_SHADER;

    constexpr
    operator GLenum() const noexcept {
        return _enum;
    }
} constexpr VERTEX_SHADER;

}
