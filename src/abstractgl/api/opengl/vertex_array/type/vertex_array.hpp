#pragma once

#include "vertex_array_name.hpp"

namespace agl::opengl {

// - RAII.
struct VertexArray {
    GLuint name = 0;

    VertexArray() {
        glCreateVertexArrays(1, &name);
    }

    VertexArray(const VertexArray&) = delete;
    
    VertexArray(VertexArray&& va) {
        name = va.name;
        va.name = GL_NONE;
    }

    ~VertexArray() noexcept {
        glDeleteVertexArrays(1, &name);
    }

    VertexArray& operator=(const VertexArray&) = delete;

    VertexArray& operator=(VertexArray&& va) {
        glDeleteVertexArrays(1, &name);
        name = va.name;
        va.name = GL_NONE;
        return *this;
    }

    operator VertexArrayName() const noexcept {
        return VertexArrayName(name);
    }

    operator GLuint() const noexcept {
        return name;
    }
};

}