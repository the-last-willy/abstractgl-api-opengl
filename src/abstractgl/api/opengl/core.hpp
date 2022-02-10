#pragma once

////////////////////////////////////////////////////////////////////////////////
// Enums.

#include "shader/enum/compile_status.hpp"
#include "shader/enum/compute_shader.hpp"
#include "shader/enum/fragment_shader.hpp"
#include "shader/enum/info_log_length.hpp"
#include "shader/enum/vertex_shader.hpp"

////////////////////////////////////////////////////////////////////////////////
// Functions.

#include "shader/function/core/get_shaderiv.hpp"
#include "vertex_array/function/core/enable_vertex_array_attrib.hpp"
#include "vertex_array/function/core/vertex_array_attrib_binding.hpp"
#include "vertex_array/function/core/vertex_array_attrib_format.hpp"
#include "vertex_array/function/core/vertex_array_element_buffer.hpp"
#include "vertex_array/function/core/vertex_array_vertex_buffer.hpp"

////////////////////////////////////////////////////////////////////////////////
// Types.

#include "vertex_array/type/optional_vertex_array_name.hpp"
#include "vertex_array/type/vertex_array.hpp"
#include "vertex_array/type/vertex_array_name.hpp"
