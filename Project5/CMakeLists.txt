cmake_minimum_required(VERSION 2.8)
project( shapee )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( shapee shape.cpp )
target_link_libraries( shapee ${OpenCV_LIBS} )
