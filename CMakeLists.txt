cmake_minimum_required(VERSION 2.8.4)
project(Vectors)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Define sources and executable
set(EXECUTABLE_NAME "Vectors")

set(SOURCE_FILES main.cpp Vector2D.cpp)

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})


# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})