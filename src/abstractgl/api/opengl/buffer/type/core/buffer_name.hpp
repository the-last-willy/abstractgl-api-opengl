#pragma once

namespace agl::api::opengl {

/**
 * Invariants:
 * - (TODO) OpenGL resource.
 */
class BufferName {
    GLuint name;

public:
    BufferName() = delete;

    // Should check that 'name' is an OpenGL name.
    BufferName(GLuint name)
        : name(name)
    {}

    operator GLuint() const noexcept {
        return name;
    }
};

}
