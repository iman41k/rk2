cmake_minimum_required(VERSION 3.16)
project(RK2)


set(PROJECT_SOURCES
    CrappyArrayInventory.cpp
    ModernInventory.cpp
)


set(PROJECT_HEADERS
    CrappyArrayInventory.h
    ModernInventory.h
)


add_library(project_lib STATIC ${PROJECT_SOURCES} ${PROJECT_HEADERS})


target_include_directories(project_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} project_lib)


enable_testing()
add_subdirectory(tests)
