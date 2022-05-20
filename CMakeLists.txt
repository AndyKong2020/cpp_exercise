cmake_minimum_required(VERSION 3.22)
project(code)

set(CMAKE_CXX_STANDARD 14)

add_executable(code main.cpp robot.cpp robot.h robot_B.cpp robot_B.h robot_S.cpp robot_S.h robot_Y.cpp robot_Y.h robot_G.cpp robot_G.h judge_sys.cpp judge_sys.h)
