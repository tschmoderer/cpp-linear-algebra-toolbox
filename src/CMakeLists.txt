# Configure documentation variable of class files 
file(GLOB files "${SRC}/in/*.in")
if (NOT GIT_FOUND)
    message("Git not found, sources ${files} will not be configured.")
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
            configure_file(${file} ${SRC}/${CURFILENAME} @ONLY)
        else()
            # FILE HAS NO MODIFICATIONS
        endif()
    endforeach()
endif()

file(GLOB files "${SRC}/*.cpp")
add_library(linalg ${files})
target_include_directories (linalg PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})