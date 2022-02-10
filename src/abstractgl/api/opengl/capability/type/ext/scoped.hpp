#pragma once

#include "../core/enabled_capability.hpp"
#include "scoped_capability.hpp"

namespace agl::api::opengl {

inline
ScopedCap scoped(EnabledCap cap) {
    return ScopedCap(cap);
}

}
