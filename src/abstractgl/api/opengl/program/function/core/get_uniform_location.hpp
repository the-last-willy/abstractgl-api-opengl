#pragma once

#include "../../type/optional_program_name.hpp"
#include "../../type/optional_uniform_location.hpp"

namespace agl::api::opengl {

inline
OptUniformLoc
GetUniformLocation(
    OptProgramName program,
    const GLchar* name)
{
    return glGetUniformLocation(
        program,
        name);
}

}
