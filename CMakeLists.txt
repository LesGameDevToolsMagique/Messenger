cmake_minimum_required(VERSION 3.3)
project(Messenger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Interfaces
set(INTERFACES interface/IMessenger.h interface/IConnection.h)

# Client
set(CONNECTION_MANAGER_FILES test/client/ConnectionManager/ConnectionManager.cpp test/client/ConnectionManager/ConnectionManager.h)
set(MESSAGE_MANAGER_FILES test/client/MessageManager/MessageManager.cpp test/client/MessageManager/MessageManager.h)
set(CLIENT_FILES ${CONNECTION_MANAGER_FILES} ${MESSAGE_MANAGER_FILES} test/client/Client.cpp test/client/Client.h)

set(SOURCE_FILES main.cpp ${INTERFACES} ${CLIENT_FILES})
add_executable(Messenger ${SOURCE_FILES})