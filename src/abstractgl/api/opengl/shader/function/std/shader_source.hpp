#pragma once

#include "../core/shader_source.hpp"

namespace agl::api::opengl {

// std::array, std::span, std::string, ...
template<typename Container> requires
requires(Container c) {
    std::data(c);
    std::size(c);
}
void
ShaderSource(
    ShaderName shader,
    const Container& c)
{
    auto string = std::data(c);
    auto length = static_cast<GLint>(std::size(c));
    ShaderSource(
        shader,
        1,
        &string,
        &length);
}

}
