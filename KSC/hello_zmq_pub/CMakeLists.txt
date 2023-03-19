cmake_minimum_required(VERSION 3.20)
project(hello_zmq_pub)

set(CMAKE_CXX_STANDARD 11)


#set(INC_DIR C:/Users/HYH/C/SDK/cppzmq_x86-windows/include)
set(INC_DIR C:/Users/HYH/C/SDK/cppzmq_x86-windows/include C:/Users/HYH/C/SDK/zeromq_x86-windows/include)
set(LINK_DIR C:/Users/HYH/C/SDK/zeromq_x86-windows/lib)


include_directories(${INC_DIR})
link_directories(${LINK_DIR})


add_executable(hello_zmq_pub main.cpp)

target_link_libraries(hello_zmq_pub libzmq-mt-4_3_4)