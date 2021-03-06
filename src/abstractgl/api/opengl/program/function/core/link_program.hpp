#pragma once

#include "../../type/core/program_name.hpp"

namespace agl::api::opengl {

inline
void
LinkProgram(
    ProgramName program)
{
    glLinkProgram(program);
}

}
