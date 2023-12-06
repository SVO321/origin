cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 17)

project(LeaverCMake)

include_directories (LeaverCMake "LeaverDynamicLibrary")

add_library(LeaverDynamicLibrary SHARED "LeaverDynamicLibrary/LeaverDynamic.h" "LeaverDynamicLibrary/LeaverDynamicSource.cpp")

add_executable(LeaverCMake "LeaverCMake/LeaverCMakeSource.cpp")

target_link_libraries(LeaverCMake "LeaverDynamicLibrary")