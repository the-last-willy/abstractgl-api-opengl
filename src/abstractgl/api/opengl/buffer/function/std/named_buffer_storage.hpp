#pragma once

#include "../../type/core/buffer_name.hpp"
#include "../core/named_buffer_storage.hpp"

#include <concepts>
#include <initializer_list>

namespace agl::api::opengl {

// std::array, std::span, std::vector, ...
template<typename Container>
requires
    requires(Container c) {
        Container::value_type;
        std::data(c);
        std::size(c);
    }
void NamedBufferStorage(
    BufferName buffer,
    const Container& c,
    GLenum flags = GL_NONE)
{
    auto size = static_cast<GLsizei>(std::size(c));
    NamedBufferStorage(
        buffer,
        size * sizeof(Container::value_type),
        std::data(c),
        flags);
}

template<typename T>
void NamedBufferStorage(
    BufferName buffer,
    const std::initializer_list<T>& il,
    GLenum flags = GL_NONE)
{
    auto size = static_cast<GLsizei>(std::size(il));
    NamedBufferStorage(
        buffer,
        size * sizeof(T),
        std::data(il),
        flags);
}

}
