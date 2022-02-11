#pragma once

#include "../../type/core/program_name.hpp"

namespace agl::api::opengl {

inline
ProgramName
CreateProgram()
{
    return ProgramName(glCreateProgram());
}

}
