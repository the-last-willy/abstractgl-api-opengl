#pragma once

#include "raii/all.hpp"

namespace agl::api::opengl {

inline
BufferMapping MapNamedBuffer(
    const BufferObj& b,
    GLbitfield access)
{
    return BufferMapping(b, glMapNamedBuffer(b, access));
}

}
