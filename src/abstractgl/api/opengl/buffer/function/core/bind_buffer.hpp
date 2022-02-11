#pragma once

#include "../../type/core/buffer_name.hpp"
#include "../../type/core/buffer_target.hpp"

namespace agl::api::opengl {

inline
void
BindBuffer(
    BufferTarget target,
    BufferName buffer)
{
    glBindBuffer(
        target,
        buffer);
}

}
