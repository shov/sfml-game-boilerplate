cmake_minimum_required(VERSION 3.16)
project(sfml_game_boilerplate)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(sfml_game_boilerplate main.cpp Infrastructure/Game.cpp Infrastructure/Game.h Infrastructure/ResourceHolder.cpp Infrastructure/ResourceHolder.h)
target_link_libraries(sfml_game_boilerplate sfml-graphics sfml-audio)
#file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})