 cmake_minimum_required(VERSION 3.15)
 project(TEST)

 add_executable(main main.cpp)
 add_definitions(-DHELLO=1)
# find_package(mylib REQUIRED
#         PATHS /home/zhanghao/Downloads/learnMakefile/004_条件编译/ # look here
#         )

 target_link_libraries(main mylib)