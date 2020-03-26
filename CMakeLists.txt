cmake_minimum_required(VERSION 3.10)

project(LeetcodePractice VERSION 1.0)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(LeetcodePractice ${SOURCES})
