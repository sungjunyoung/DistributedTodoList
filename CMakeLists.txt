cmake_minimum_required(VERSION 3.17)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
        CACHE STRING "Vcpkg toolchain file")
set(CMAKE_CXX_STANDARD 17)

project(DistributedTodoList)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/sources/*.cc)
set(INCLUDES ${PROJECT_SOURCE_DIR}/sources)

add_subdirectory(sources)
add_subdirectory(tests)
