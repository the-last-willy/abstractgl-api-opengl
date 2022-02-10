#pragma once

#include "../../type/optional_attribute_location.hpp"
#include "../../type/optional_program_name.hpp"

namespace agl::api::opengl {

inline
OptAttribLoc
GetAttribLocation(
    OptProgramName program,
    const GLchar* name)
{
    return glGetAttribLocation(
        program,
        name);
}

}
