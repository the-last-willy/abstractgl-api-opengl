add_library(api_opengl INTERFACE)

target_include_directories(api_opengl
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:src>
)

add_library(abstractgl::api_opengl ALIAS api_opengl)

install(
    TARGETS api_opengl
    EXPORT  api_openglTargets
)

install(
    EXPORT      api_openglTargets
    DESTINATION lib/cmake/abstractgl
    FILE        api_openglTargets.cmake
    NAMESPACE   abstractgl::
)

include(CMakePackageConfigHelpers)

write_basic_package_version_file(
    api_openglConfigVersion.cmake
    VERSION       0.2
    COMPATIBILITY AnyNewerVersion)

install(
    FILES 
        ../cmake/api_openglConfig.cmake 
        ${CMAKE_CURRENT_BINARY_DIR}/api_openglConfigVersion.cmake
    DESTINATION 
        lib/cmake/abstractgl
)
