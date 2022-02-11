#pragma once

#include "../../function/core/create_program.hpp"
#include "../core/program_name.hpp"

namespace agl::api::opengl {

// - RAII.
class ProgramObj : public ProgramName {
public:
    ProgramObj()
        : ProgramName(CreateProgram())
    {}

    ProgramObj(const ProgramObj&) = delete;
    
    ProgramObj(ProgramObj&& p)
        : ProgramName(p)
    {
        static_cast<ProgramName&>(p) = ProgramName(GL_NONE);
    }

    ~ProgramObj() noexcept {
        glDeleteProgram(*this);
    }

    ProgramObj& operator=(const ProgramObj&) = delete;

    ProgramObj& operator=(ProgramObj&& p) {
        glDeleteProgram(*this);
        static_cast<ProgramName&>(*this) = static_cast<ProgramName&>(p);
        static_cast<ProgramName&>(p) = ProgramName(GL_NONE);
        return *this;
    }
};

}
