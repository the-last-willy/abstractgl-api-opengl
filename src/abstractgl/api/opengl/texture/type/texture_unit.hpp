#pragma once

namespace agl::api::opengl {

/**
 * Texture unit.
 */
struct TexUnit {
    GLuint value;

    operator GLuint() const noexcept {
        return value;
    }
};

}
