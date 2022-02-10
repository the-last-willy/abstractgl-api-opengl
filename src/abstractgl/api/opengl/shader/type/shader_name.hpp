#pragma once

namespace agl::api::opengl {

struct ShaderName {
    GLuint name = GL_NONE;

    ShaderName() = default;

    explicit
    ShaderName(GLuint name)
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
