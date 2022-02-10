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

#include "buffer/function/core/get_named_buffer_parameter.hpp"
#include "buffer/function/core/get_named_buffer_sub_data.hpp"
#include "buffer/function/core/named_buffer_storage.hpp"
// #include "buffer_mapping/function/core/map_named_buffer.hpp"
// #include "buffer_mapping/function/core/map_named_buffer_range.hpp"
#include "capability/function/disable.hpp"
#include "capability/function/enable.hpp"
#include "framebuffer/function/clear_named_framebuffer.hpp"
#include "program/function/core/attach_shader.hpp"
#include "program/function/core/get_attrib_location.hpp"
#include "program/function/core/get_uniform_location.hpp"
#include "program/function/core/link_program.hpp"
#include "program/function/core/program_uniform.hpp"
#include "program/function/core/shader_storage_block_binding.hpp"
// #include "query/function/begin_query.hpp"
// #include "query/function/end_query.hpp"
// #include "query/function/get_query_object.hpp"
#include "shader/function/core/create_shader.hpp"
#include "shader/function/core/get_shaderiv.hpp"
#include "shader/function/core/shader_source.hpp"
#include "shader/function/ext/get_shaderiv.hpp"
#include "shader/function/std/shader_source.hpp"
#include "vertex_array/function/core/enable_vertex_array_attrib.hpp"
#include "vertex_array/function/core/vertex_array_attrib_binding.hpp"
#include "vertex_array/function/core/vertex_array_attrib_format.hpp"
#include "vertex_array/function/core/vertex_array_element_buffer.hpp"
#include "vertex_array/function/core/vertex_array_vertex_buffer.hpp"


////////////////////////////////////////////////////////////////////////////////
// Types.

#include "buffer/type/buffer_name.hpp"
#include "buffer/type/buffer_object.hpp"
#include "buffer/type/optional_buffer_name.hpp"
// #include "buffer_mapping/type/core/buffer_mapping.hpp"
#include "capability/type/core/enabled_capability.hpp"
#include "capability/type/ext/scoped.hpp"
#include "capability/type/ext/scoped_capability.hpp"
#include "draw/draw_elements_indirect_command.hpp"
#include "framebuffer/type/framebuffer.hpp"
#include "program/type/attribute_location.hpp"
#include "program/type/optional_attribute_location.hpp"
#include "program/type/optional_program_name.hpp"
#include "program/type/optional_uniform_location.hpp"
#include "program/type/program_object.hpp"
#include "query/type/query.hpp"
#include "sampler/type/sampler_object.hpp"
#include "shader/type/shader.hpp"
#include "shader/type/shader_name.hpp"
#include "texture/type/texture_unit.hpp"
#include "vertex_array/type/optional_vertex_array_name.hpp"
#include "vertex_array/type/vertex_array.hpp"
#include "vertex_array/type/vertex_array_name.hpp"
