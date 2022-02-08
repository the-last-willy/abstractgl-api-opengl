#pragma once

#include "../../type/optional_program_name.hpp"

namespace agl::opengl {

inline
void
LinkProgram(
    OptProgramName program)
{
    glLinkProgram(program);
}

}
