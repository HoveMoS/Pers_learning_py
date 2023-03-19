cmake_minimum_required(VERSION 3.20)
project(hello_fltk)


set(CMAKE_CXX_STANDARD 11)

set(INC_DIR C:/Users/HYH/C/SDK/fltk_x86-windows/include)
set(LINK_DIR C:/Users/HYH/C/SDK/fltk_x86-windows/lib)

include_directories(${INC_DIR})
link_directories(${LINK_DIR})

add_executable(hello_fltk main.cpp)

#target_link_libraries(main fltk fltk_gl fltk_forms fltk_images)
target_link_libraries(hello_fltk fltk fltk_gl fltk_forms fltk_images)


