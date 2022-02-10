#pragma once

#include "../type/core/enabled_capability.hpp"

namespace agl::api::opengl {

EnabledCap Enable(GLenum cap) {
    glEnable(cap);
    return cap;
}

}
