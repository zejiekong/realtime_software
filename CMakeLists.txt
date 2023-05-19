cmake_minimum_required(VERSION 3.16.3)
project(realtime_software VERSION 0.0.1
                          DESCRIPTION "Realtime Software Mod"
                          LANGUAGES C)
add_subdirectory(${CMAKE_PROJECT_NAME})
add_subdirectory(examples)
add_subdirectory(revision)