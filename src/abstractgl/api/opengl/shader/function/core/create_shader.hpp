#pragma once

#include "../../enum/compute_shader.hpp"
#include "../../enum/fragment_shader.hpp"
#include "../../enum/vertex_shader.hpp"
#include "../../type/core/shader_name.hpp"

namespace agl::api::opengl {

template<typename SHADER>
ShaderName CreateShader(SHADER) {
    return ShaderName(glCreateShader(SHADER::_enum));
}

}
