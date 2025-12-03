cmake_minimum_required(VERSION 3.10)
project(v2)
include_directories(Include)
file(GLOB SOURCES "src/*.cpp")

add_executable(v2 ${SOURCES})


