#pragma once

namespace agl::api::opengl {

struct OptProgramName {
    GLuint name = GL_NONE;

    OptProgramName() = default;

    explicit
    OptProgramName(GLuint name) noexcept
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
