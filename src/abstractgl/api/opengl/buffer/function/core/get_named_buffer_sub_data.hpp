#pragma once

#include "../../type/buffer_name.hpp"

#include <concepts>

namespace agl::api::opengl {

////////////////////////////////////////////////////////////////////////////////
// Standard library compatibility.

// Standard containers: array, span, vector, ...
template<typename Container> requires
requires(Container c) {
    Container::value_type;
    { data(c) } -> std::convertible_to<const Container::value_type*>;
    { size(c) } -> std::integral;
}
void GetNamedBufferSubData(
    BufferName buffer,
    GLintptr offset,
    Container& c)
{
    glGetNamedBufferSubData(
        buffer,
        offset,
        GLsizei(size(c)) * sizeof(Container::value_type),
        data(c));
}

}
