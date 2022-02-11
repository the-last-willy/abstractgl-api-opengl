#pragma once

namespace agl::api::opengl {

class ProgramName {
    GLuint name = GL_NONE;

public:
    ProgramName() = delete;

    explicit
    ProgramName(GLuint name) noexcept
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
