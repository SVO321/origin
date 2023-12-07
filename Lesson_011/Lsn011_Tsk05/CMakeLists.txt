cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 17)

project(ClassHierarchyCMake)

include_directories (ClassHierarchyCMake "ClassDynamicLibrary")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(ClassDynamicLibrary SHARED "ClassDynamicLibrary/figure.h" "ClassDynamicLibrary/Figure.cpp" 
"ClassDynamicLibrary/equilateraltriangle.h" "ClassDynamicLibrary/EquilateralTriangle.cpp" 
"ClassDynamicLibrary/isoscelestriangle.h" "ClassDynamicLibrary/IsoscelesTriangle.cpp" 
"ClassDynamicLibrary/parallelogram.h" "ClassDynamicLibrary/Parallelogram.cpp" 
"ClassDynamicLibrary/quadrangle.h" "ClassDynamicLibrary/Quadrangle.cpp" 
"ClassDynamicLibrary/rectanglef.h" "ClassDynamicLibrary/RectangleF.cpp" 
"ClassDynamicLibrary/righttriangle.h" "ClassDynamicLibrary/RightTriangle.cpp" 
"ClassDynamicLibrary/romb.h" "ClassDynamicLibrary/Romb.cpp" 
"ClassDynamicLibrary/square.h" "ClassDynamicLibrary/Square.cpp" 
"ClassDynamicLibrary/triangle.h" "ClassDynamicLibrary/Triangle.cpp")

add_executable(ClassHierarchyCMake "ClassHierarchyCMake/ClassHierarchyCMake.cpp")

target_link_libraries(ClassHierarchyCMake "ClassDynamicLibrary")