#pragma once

#include "../../type/core/buffer_name.hpp"

#include <concepts>

namespace agl::api::opengl {

// std::array, std::span, std::vector, ...
template<typename Container> 
requires
    requires(Container c) {
        Container::value_type;
        std::data(c);
        std::size(c);
    }
void GetNamedBufferSubData(
    BufferName buffer,
    GLintptr offset,
    Container& c)
{
    auto size = static_cast<GLsizei>(std::size(c));
    glGetNamedBufferSubData(
        buffer,
        offset,
        size * sizeof(Container::value_type),
        std::data(c));
}

}
