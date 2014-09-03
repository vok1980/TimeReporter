
cmake_minimum_required(VERSION 2.8)

project (TimeReporter)

SET (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin CACHE PATH
   "Single output directory for building all executables.")

if(UNIX)
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x" )
endif(UNIX)


add_subdirectory( ./gui )
add_subdirectory( ./reporter )
add_subdirectory( ./store )


