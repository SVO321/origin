cmake_minimum_required(VERSION 3.26)
project(Lsn010_Tsk02)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lsn010_Tsk02 main.cpp
        figure.h
        Figure.cpp
        triangle.h
        Triangle.cpp
        righttriangle.h
        RightTriangle.cpp
        IsoscelesTriangle.cpp
        isoscelestriangle.h
        EquilateralTriangle.cpp
        equilateraltriangle.h
        quadrangle.h
        Quadrangle.cpp
        parallelogram.h
        Parallelogram.cpp
        rectanglef.h
        RectangleF.cpp
        romb.h
        Romb.cpp
        square.h
        Square.cpp
)
