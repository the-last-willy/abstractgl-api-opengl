#pragma once

#include "../../../shader/type/core/shader_name.hpp"
#include "../../type/core/program_name.hpp"

namespace agl::api::opengl {

inline
void
AttachShader(
    ProgramName program,
    ShaderName shader)
{
    glAttachShader(program, shader);
}

}
