#pragma once

#include "../../function/core/create_program.hpp"
#include "../core/program_name.hpp"

namespace agl::api::opengl {

// - RAII.
class ProgramObj : public ProgramName {
    ProgramName name = CreateProgram();

public:
    ProgramObj() = default;

    ProgramObj(const ProgramObj&) = delete;
    
    ProgramObj(ProgramObj&& p) {
        name = p.name;
        p.name = ProgramName(GL_NONE);
    }

    ~ProgramObj() noexcept {
        glDeleteProgram(name);
    }

    ProgramObj& operator=(const ProgramObj&) = delete;

    ProgramObj& operator=(ProgramObj&& p) {
        glDeleteProgram(name);
        name = p.name;
        p.name = ProgramName(GL_NONE);
        return *this;
    }
};

}
