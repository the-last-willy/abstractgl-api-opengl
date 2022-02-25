#pragma once

#include "../../enum/buffer_size.hpp"
#include "../../type/core/buffer_name.hpp"
#include "../core/get_named_buffer_parameter_iv.hpp"

namespace agl::api::opengl {

inline
GLint GetNamedBufferParameteriv(
    BufferName buffer,
    decltype(BUFFER_SIZE) bs)
{
    GLint data;
    GetNamedBufferParameteriv(buffer, bs, &data);
    return data;
}

}
