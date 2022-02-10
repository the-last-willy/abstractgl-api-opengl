#pragma once

namespace agl::api::opengl {

/**
 * Invariants:
 * - (TODO) OpenGL resource ??
 */
class OptBufferName {
    GLuint name = GL_NONE;

public:
    OptBufferName() = default;

    // Should check that 'name' is an OpenGL name ??
    OptBufferName(GLuint name)
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
