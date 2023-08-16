# set cmake version
cmake_minimum_required(VERSION 3.5)

# set project name, version and language
project(cpp_dev VERSION 1.0.0 LANGUAGES CXX)

# set the cxx standard of the project
set(CMAKE_CXX_STANDARD 20)

# adding sub directories that has CMakeLists
add_subdirectory(app) 
add_subdirectory(engine) 
