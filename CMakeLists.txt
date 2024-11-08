cmake_minimum_required(VERSION 3.5)

project(TemplatePattern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 若是MSVC编译器，则使用UTF-8编码
if(MSVC)
    set(CMAKE_C_FLAGS /utf-8)
    set(CMAKE_CXX_FLAGS /utf-8)

    # 添加 /EHsc 选项，启用 C++ 异常处理和适当的展开语义
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc")
endif()

add_executable(TemplatePattern main.cpp
    DrinkTemplate.h DrinkTemplate.cpp
    Coffee.h Coffee.cpp
    Tea.h Tea.cpp)
