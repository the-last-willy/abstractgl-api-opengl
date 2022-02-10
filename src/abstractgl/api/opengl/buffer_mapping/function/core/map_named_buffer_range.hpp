#pragma once

#include "raii/all.hpp"

namespace agl::api::opengl {

inline
BufferMapping MapNamedBufferRange(
    const BufferObj& b,
	GLintptr offset,
	GLsizei length,
	GLbitfield access) 
{
    return BufferMapping(b, glMapNamedBufferRange(b, offset, length, access));
}

}
