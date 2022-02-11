#pragma once

namespace agl::api::opengl {

class BufferTarget {
    GLuint target;

public:
    BufferTarget() = delete;

    BufferTarget(GLuint target)
        : target(target)
    {}

    operator GLuint() const noexcept {
        return target;
    }
};

}
