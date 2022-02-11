#pragma once

namespace agl::api::opengl {

struct {
    constexpr
    operator GLuint() const noexcept {
        return 0;
    }
}
constexpr ZERO;

}
