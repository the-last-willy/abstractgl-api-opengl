#pragma once

namespace agl::api::opengl {

/**
 * Invariants:
 * - (TODO) OpenGL resource ??
 */
class OptVertexArrayName {
    GLuint name = GL_NONE;

public:

    OptVertexArrayName() = default;

    // Should check that 'name' is an OpenGL name ??
    OptVertexArrayName(GLuint name)
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
