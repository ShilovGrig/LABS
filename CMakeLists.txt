cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 17)

project(final_task CXX)

set(src_files 
    AVLTreeBase.cpp
    AVLTreeNode.cpp
    AVLTree.cpp
)

add_executable(final_task main.cpp ${src_files})