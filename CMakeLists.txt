cmake_minimum_required(VERSION 3.15)
project(CharStack)

set(CMAKE_CXX_STANDARD 14)

add_executable(CharStack main.cpp CharStack.cpp PairMatcher.cpp)