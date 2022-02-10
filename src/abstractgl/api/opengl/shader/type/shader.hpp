#pragma once

#include "../function/core/create_shader.hpp"
#include "shader_name.hpp"

namespace agl::api::opengl {

/**
 * Invariants:
 * - RAII.
 */
class Shader {
    ShaderName name;

public:
    template<typename SHADER>
    Shader(SHADER s)
        : name(CreateShader(s))
    {}

    Shader(const Shader&) = delete;

    Shader(Shader&&) = default;

    ~Shader() {
        glDeleteShader(name);
    }

    Shader& operator=(const Shader&) = delete;

    Shader& operator=(Shader&&) = delete;

    operator ShaderName() const noexcept {
        return name;
    }

    operator GLuint() const noexcept {
        return name;
    }
};

}
