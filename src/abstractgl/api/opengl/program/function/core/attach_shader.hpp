#pragma once

#include "../../../shader/type/core/shader_name.hpp"
#include "../../type/optional_program_name.hpp"

namespace agl::api::opengl {

inline
void
AttachShader(
    OptProgramName program,
    ShaderName shader)
{
    glAttachShader(program, shader);
}

}
