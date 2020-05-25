cmake_minimum_required(VERSION 3.16)
project(temp)

set(CMAKE_CXX_STANDARD 14)

add_executable(temp BeginWhileExpression.cpp DotExpression.cpp EndWhileExpression.cpp
        Executor.cpp Expression.cpp GlobalVariables.cpp MinusExpression.cpp Parser.cpp PlusExpression.cpp SmallerExpression.cpp
        Source.cpp)