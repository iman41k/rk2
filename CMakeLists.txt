cmake_minimum_required(VERSION 3.10)
project(AdapterExample)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
    main.cpp
    CrappyArrayInventory.cpp
    ModernInventory.cpp
)

add_executable(BuilderDesignPattern ${SOURCE_FILES})
target_include_directories(BuilderDesignPattern PUBLIC ${PROJECT_SOURCE_DIR})


enable_testing()

add_subdirectory(tests)
