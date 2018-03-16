set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -o2 -L/usr/local/lib")

set(src_list momichain_cli.cpp)

add_executable(momichain ${src_list})