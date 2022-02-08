#pragma once

#include "../../../shader/type/shader_name.hpp"
#include "../../type/optional_program_name.hpp"

namespace agl::opengl {

inline
void
AttachShader(
    OptProgramName program,
    ShaderName shader)
{
    glAttachShader(program, shader);
}

}
