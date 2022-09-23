# Configure Doxygen file
set(DOXYGEN_IN  ${DOCS}/doxyfile.conf)
set(DOXYGEN_OUT ${DOCS}/doxyfile.in)

configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

# If doxygen exists create a target
# check if Doxygen is installed
find_package(Doxygen)
if (DOXYGEN_FOUND)
    # note the option ALL which allows to build the docs together with the application
    add_custom_target(docs
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT} && xd
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)