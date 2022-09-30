# Configure documentation variable of class files 
file(GLOB files "${SRC}/in/*.in")
foreach(file ${files})
    get_filename_component(CURFILENAME ${file} NAME_WLE)
    configure_file(${file} ${SRC}/${CURFILENAME} @ONLY)
endforeach()

file(GLOB files "${SRC}/*.cpp")
add_library(linalg ${files})
target_include_directories (linalg PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})