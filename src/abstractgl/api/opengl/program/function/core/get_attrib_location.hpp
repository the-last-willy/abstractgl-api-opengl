#pragma once

#include "../../type/core/optional_attribute_location.hpp"
#include "../../type/core/program_name.hpp"

namespace agl::api::opengl {

inline
OptAttribLoc
GetAttribLocation(
    ProgramName program,
    const GLchar* name)
{
    return glGetAttribLocation(
        program,
        name);
}

}
