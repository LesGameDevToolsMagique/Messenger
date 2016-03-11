cmake_minimum_required(VERSION 3.3)
project(Messenger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(INTERFACES Interface/IMessenger.h)
set(CLIENT_FILES test/client/Client.cpp test/client/Client.h)

set(SOURCE_FILES main.cpp ${INTERFACES} ${CLIENT_FILES})
add_executable(Messenger ${SOURCE_FILES})