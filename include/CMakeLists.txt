# Configure documentation variable of header files 
file(GLOB files "${INC}/in/*.in")
foreach(file ${files})
    get_filename_component(CURFILENAME ${file} NAME_WLE)
    configure_file(${file} ${INC}/${CURFILENAME} @ONLY)
endforeach()