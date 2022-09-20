cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

# Define project name and language
project("CPP Linear Algebra ToolBox" LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_BUILD_TYPE   Debug)
set(CMAKE_C_COMPILER   /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall")

# Use CTest for unitary testing
include(CTest)
enable_testing()

# define directories
set(SRC      ${PROJECT_SOURCE_DIR}/src)
set(TESTS    ${PROJECT_SOURCE_DIR}/tests)
set(EXAMPLES ${PROJECT_SOURCE_DIR}/examples)
set(DOCS     ${PROJECT_SOURCE_DIR}/docs)

add_subdirectory(${SRC})
add_subdirectory(${TESTS})
add_subdirectory(${EXAMPLES})
add_subdirectory(${DOCS})
