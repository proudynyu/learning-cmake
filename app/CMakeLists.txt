# cmake version
cmake_minimum_required(VERSION 3.5)

# project name, version and language
project(app VERSION 1.0.0 LANGUAGES CXX)

# cxx standard
set(CMAKE_CXX_STANDARD 20)

# project executable name
add_executable(${PROJECT_NAME} src/main.cpp)

# link libs and includes that will be used
target_link_libraries(${PROJECT_NAME} engine)
target_include_directories(${PROJECT_NAME} PRIVATE engine)

