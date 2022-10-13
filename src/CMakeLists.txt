file(GLOB files "${SRC}/*.cpp")
add_library(linalg ${files})
target_include_directories (linalg PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})