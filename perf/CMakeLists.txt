# folder wide compile options
add_compile_options(-O3)

add_executable(perf_dot_vector perf_vector_1.cpp)
target_link_libraries (perf_dot_vector LINK_PUBLIC linalg)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/perf_linalg_lib.py ${CMAKE_CURRENT_BINARY_DIR}/perf_linalg_lib.py @ONLY)