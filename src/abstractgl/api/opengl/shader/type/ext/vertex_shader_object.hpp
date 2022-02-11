#pragma once

#include "../../enum/vertex_shader.hpp"
#include "shader_object.hpp"

namespace agl::api::opengl {

class VertexShaderObj : public Shader {
public:
    VertexShaderObj()
        : Shader(VERTEX_SHADER) 
    {}
};

}
