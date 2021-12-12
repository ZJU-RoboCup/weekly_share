cmake_minimum_required(VERSION 3.14)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#######################################

project(point LANGUAGES CXX)
find_package(fmt REQUIRED)

set(LIBS fmt::fmt)
set(SOURCE_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/point.h
    ${CMAKE_CURRENT_SOURCE_DIR}/point.cpp
)
add_library(${CMAKE_PROJECT_NAME} SHARED
    ${SOURCE_FILES}
)
target_link_libraries(${CMAKE_PROJECT_NAME} ${LIBS})

#####################################################

project(main LANGUAGES CXX)
set(SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
set(LIBS point)
add_executable(${CMAKE_PROJECT_NAME}
    ${SOURCE_FILES}
)
target_link_libraries(${CMAKE_PROJECT_NAME} ${LIBS})