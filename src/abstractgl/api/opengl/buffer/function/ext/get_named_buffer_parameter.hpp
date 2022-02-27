#pragma once

#include "../../enum/buffer_size.hpp"
#include "../../type/core/buffer_name.hpp"
#include "../core/get_named_buffer_parameter_iv.hpp"

namespace agl::api::opengl {

inline
GLint GetNamedBufferParameter(
    BufferName buffer,
    decltype(BUFFER_SIZE) pname)
{
    GLint data;
    GetNamedBufferParameteriv(buffer, pname, &data);
    return data;
}

}
