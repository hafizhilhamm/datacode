cmake_minimum_required(VERSION 2.8)
project( cobacv )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( cobacv reversecam.cpp )
target_link_libraries( cobacv ${OpenCV_LIBS} )
