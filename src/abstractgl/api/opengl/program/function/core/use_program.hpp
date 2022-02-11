#pragma once

#include "../../type/core/program_name.hpp"

namespace agl::api::opengl {

inline
void
UseProgram(
    ProgramName program)
{
    glUseProgram(program);
}

}
