cmake_minimum_required(VERSION 2.8)
project( bro )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( bro color.cpp )
target_link_libraries( bro ${OpenCV_LIBS} )
