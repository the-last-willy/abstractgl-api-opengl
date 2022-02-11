#pragma once

#include "../core/vertex_array_name.hpp"

namespace agl::api::opengl {

// - RAII.
struct VertexArrayObj {
    GLuint name = 0;

    VertexArrayObj() {
        glCreateVertexArrays(1, &name);
    }

    VertexArrayObj(const VertexArrayObj&) = delete;
    
    VertexArrayObj(VertexArrayObj&& va) {
        name = va.name;
        va.name = GL_NONE;
    }

    ~VertexArrayObj() noexcept {
        glDeleteVertexArrays(1, &name);
    }

    VertexArrayObj& operator=(const VertexArrayObj&) = delete;

    VertexArrayObj& operator=(VertexArrayObj&& va) {
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
