#pragma once

#include "../../type/program_object.hpp"

#include <concepts>
#include <span>

namespace agl::api::opengl {

inline
void ProgramUniform3fv(
    const Program& program,
    OptUniformLoc location,
    std::span<const GLfloat, 3> value)
{
    glProgramUniform3fv(
        program,
        location,
        1,
        data(value));
}

inline
void ProgramUniform4fv(
    const Program& program,
    OptUniformLoc location,
    GLsizei count,
    const GLfloat* value)
{
    glProgramUniform4fv(
        program,
        location,
        count,
        value);
}

inline
void ProgramUniform4fv(
    const Program& program,
    OptUniformLoc location,
    std::span<const GLfloat, 4> value)
{
    glProgramUniform4fv(
        program,
        location,
        1,
        data(value));
}

inline
void ProgramUniform4fv(
    const Program& program,
    OptUniformLoc location,
    std::array<GLfloat, 4> value)
{
    ProgramUniform4fv(
        program,
        location,
        std::span(value));
}

}
