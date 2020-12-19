CMAKE_MINIMUM_REQUIRED(VERSION 3.18)

project(lab6DLL CXX)

set(SOURCES MyLib/lab6.cpp)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(SPlab6 SHARED ${SOURCES})	

INCLUDE_DIRECTORIES(SPlab6)

LINK_DIRECTORIES(SPlab6)

add_executable(main main.cpp)

target_link_libraries(main SPlab6)