cmake_minimum_required(VERSION 3.23)
project(minLib CXX)
include(cmake/common.cmake)

add_library(${PROJECT_NAME} STATIC 
     
       
)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>
  $<INSTALL_INTERFACE:minLib>  ${CMAKE_SOURCE_DIR} # <prefix>/include/mylib
)
#for testing
add_executable(${PROJECT_NAME}_app app app/main.cpp)

target_link_libraries(${PROJECT_NAME}_app 
    PRIVATE
    minLib::minLib
)

target_sources(${PROJECT_NAME}
PRIVATE
    src/minLib.cpp
PUBLIC
    include/minLib.h
)



