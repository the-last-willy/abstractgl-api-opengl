#pragma once

#include "../../type/optional_program_name.hpp"

namespace agl::api::opengl {

inline
void
LinkProgram(
    OptProgramName program)
{
    glLinkProgram(program);
}

}
