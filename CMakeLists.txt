cmake_minimum_required(VERSION 3.5.1)

#project(QueueEvent LANGUAGES CXX )
project(QueueEvent)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -pthread")

include_directories(PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/headers/
)

set(SOURCES
    main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sources/A.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/sources/B.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sources/Queue.cpp
)

add_executable(QueueEvent ${SOURCES})
