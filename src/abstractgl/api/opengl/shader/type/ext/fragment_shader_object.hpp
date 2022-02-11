#pragma once

#include "../../enum/fragment_shader.hpp"
#include "shader_object.hpp"

namespace agl::api::opengl {

class FragmentShaderObj : public Shader {
public:
    FragmentShaderObj()
        : Shader(FRAGMENT_SHADER) 
    {}
};

}
