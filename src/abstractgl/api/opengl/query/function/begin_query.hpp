#pragma once

namespace agl::api::opengl {

inline
void BeginQuery(GLenum target, const Query& id) {
    glBeginQuery(target, id);
}

}
