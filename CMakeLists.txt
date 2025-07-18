cmake_minimum_required(VERSION 3.20)
project(TodoList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(todo_list
    src/main.cpp
    src/TodoList.cpp
)

target_include_directories(todo_list PRIVATE include)