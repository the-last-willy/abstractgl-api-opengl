#pragma once

#include "../../type/buffer_name.hpp"

#include <concepts>
#include <initializer_list>

namespace agl::api::opengl {

inline
void NamedBufferStorage(
    BufferName buffer,
    GLsizei size,
    const GLvoid* data,
    GLenum flags = GL_NONE)
{
    glNamedBufferStorage(
        buffer,
        size,
        data,
        flags);
}

inline
void NamedBufferStorage(
    BufferName buffer,
    GLsizei size,
    GLenum flags = GL_NONE)
{
    NamedBufferStorage(
        buffer,
        size,
        NULL,
        flags);
}

////////////////////////////////////////////////////////////////////////////////
// Standard library compatibility.

// Standard containers: array, span, vector, ...
template<typename Container> requires
requires(Container c) {
    Container::value_type;
    { data(c) } -> std::convertible_to<const Container::value_type*>;
    { size(c) } -> std::integral;
}
void NamedBufferStorage(
    BufferName buffer,
    const Container& c,
    GLenum flags = GL_NONE)
{
    glNamedBufferStorage(
        buffer,
        size(c) * sizeof(Container::value_type),
        data(c),
        flags);
}

template<typename T>
void NamedBufferStorage(
    BufferName buffer,
    const std::initializer_list<T>& il,
    GLenum flags = GL_NONE)
{
    glNamedBufferStorage(
        buffer,
        size(il) * sizeof(T),
        data(il),
        flags);
}

}
