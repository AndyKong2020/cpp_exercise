cmake_minimum_required(VERSION 3.22)
project(code)

set(CMAKE_CXX_STANDARD 14)

add_executable(code main.cpp Robot.cpp Robot.h Infantry.cpp Infantry.h Sentry.cpp Sentry.h Hero.cpp Hero.h Engineer.cpp Engineer.h JudgeSystem.cpp JudgeSystem.h)
