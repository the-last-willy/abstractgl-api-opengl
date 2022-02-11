#pragma once

#include "../../enum/compute_shader.hpp"
#include "shader_object.hpp"

namespace agl::api::opengl {

class ComputeShaderObj : public Shader {
public:
    ComputeShaderObj()
        : Shader(COMPUTE_SHADER) 
    {}
};

}
