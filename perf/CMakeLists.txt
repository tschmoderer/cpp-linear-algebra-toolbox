# configure readme
file(GLOB files "${PERF}/in/*.in")
if (NOT GIT_FOUND)
    message("Git not found, performance ${files} will not be configured.")
else()
    foreach(file ${files})
        execute_process(
            COMMAND ${GIT_EXECUTABLE} diff ${file}
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
            OUTPUT_VARIABLE GIT_DIFF_FILES
            RESULT_VARIABLE GIT_DIFF_ERROR_CODE
            OUTPUT_STRIP_TRAILING_WHITESPACE
        )
        # WORKS OPPOSITE AS IT SHOULD
        if (NOT "${GIT_DIFF_FILES}" STREQUAL "")
            # FILE HAS MODIFICATIONS 
            get_filename_component(CURFILENAME ${file} NAME_WLE)
            configure_file(${file} ${PERF}/${CURFILENAME} @ONLY)
        else()
            # FILE HAS NO MODIFICATIONS
        endif()
    endforeach()
endif()

# folder wide compile options
add_compile_options(-O3)

add_executable(perf_dot_vector perf_vector_1.cpp)
target_link_libraries (perf_dot_vector LINK_PUBLIC linalg)

file(MAKE_DIRECTORY ${DOCS}/img)
file(MAKE_DIRECTORY ${DOCS}/img/perf)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/perf_linalg_lib.py ${CMAKE_CURRENT_BINARY_DIR}/perf_linalg_lib.py @ONLY)