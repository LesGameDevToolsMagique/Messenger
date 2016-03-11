cmake_minimum_required(VERSION 3.3)
project(Messenger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Interface/IMessenger.h)
add_executable(Messenger ${SOURCE_FILES})