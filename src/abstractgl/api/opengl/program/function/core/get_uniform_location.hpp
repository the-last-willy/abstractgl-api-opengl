#pragma once

#include "../../type/core/program_name.hpp"
#include "../../type/core/optional_uniform_location.hpp"

namespace agl::api::opengl {

inline
OptUniformLoc
GetUniformLocation(
    ProgramName program,
    const GLchar* name)
{
    return glGetUniformLocation(
        program,
        name);
}

}
