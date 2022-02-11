#pragma once

namespace agl::api::opengl {

/**
 * Invariants:
 * - (TODO) OpenGL resource.
 */
class VertexArrayName {
    GLuint name;

public:

    VertexArrayName() = delete;

    // Shoudl check that 'name' is an OpenGL name.
    VertexArrayName(GLuint name)
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
