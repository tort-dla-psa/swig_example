cmake_minimum_required(VERSION 3.0)
project(swig_proj)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

find_package(PythonLibs)
include_directories(${PYTHON_INCLUDE_PATH} .)

set_property(SOURCE swig_module.i PROPERTY CPLUSPLUS ON)
swig_add_library(cpp_side LANGUAGE python 
    SOURCES swig_module.i
	cpp_side.cpp)
swig_link_libraries(cpp_side ${PYTHON_LIBRARIES})