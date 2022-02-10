#pragma once

#include "raii/query.hpp"

namespace agl::api::opengl {

inline
void EndQuery(GLenum target) {
    glEndQuery(target);
}

}
