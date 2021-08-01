cmake_minimum_required(VERSION 3.20)

message(STATUS "Using CMake ${CMAKE_VERSION}")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set up project
project(my_hpx_project CXX)
message(STATUS ${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(HPX_IGNORE_BOOST_COMPATIBILITY ON)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(SRC_DIR ${CMAKE_SOURCE_DIR}/source)

#set(HPX_DIR "c:/Packages/installed/x86-windows/share/hpx" CACHE PATH "Initial cache" FORCE)

find_package(HPX REQUIRED)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/Debug)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/Release)

add_executable(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} HPX::hpx HPX::wrap_main HPX::iostreams_component)

target_sources(${PROJECT_NAME} PRIVATE
"source/main.cpp"
)