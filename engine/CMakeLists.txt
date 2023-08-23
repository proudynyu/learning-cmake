# set cmake version
cmake_minimum_required(VERSION 3.5)

# set project name, version and language
project(engine VERSION 1.0.0 LANGUAGES CXX)

# set cxx standard for the project
set(CMAKE_CXX_STANDARD 20)

# Adding libraries
## external libs with CMakeLists
add_subdirectory(external/glm)
add_subdirectory(external/glfw)

## My own lib
add_library(${PROJECT_NAME} src/engine.cpp)

# Include Dirs
target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        glm
        glfw
    PRIVATE
)

# Link libs
target_link_libraries(${PROJECT_NAME}
    PUBLIC
        stdc++
        glm
        glfw
    PRIVATE
)
