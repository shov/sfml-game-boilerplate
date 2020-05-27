cmake_minimum_required(VERSION 3.16)
project(sfml_game_boilerplate)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

FILE(GLOB srcFiles ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.cpp)
FILE(GLOB hFiles ${CMAKE_CURRENT_SOURCE_DIR}/include/**/*.cpp)

add_executable(sfml_game_boilerplate main.cpp ${srcFiles} ${hFiles})
target_link_libraries(sfml_game_boilerplate sfml-graphics sfml-audio)

#Copy assets to the build destination
#file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})