#pragma once

#include "../core/buffer_name.hpp"

namespace agl::api::opengl {

// - RAII.
struct BufferObj {
    GLuint name;

    BufferObj() {
        glCreateBuffers(1, &name);
    }

    BufferObj(const BufferObj&) = delete;

    BufferObj(BufferObj&& b) {
        name = b.name;
        b.name = GL_NONE;
    }

    ~BufferObj() noexcept {
        glDeleteBuffers(1, &name);
    }

    BufferObj& operator=(const BufferObj&) = delete;

    BufferObj& operator=(BufferObj&& b) {
        glDeleteBuffers(1, &name);
        name = b.name;
        b.name = GL_NONE;
        return *this;
    }

    operator BufferName() const noexcept {
        return BufferName(name);
    }

    operator GLuint() const noexcept {
        return name;
    }
};

}
