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

# Добавляем Google Test с использованием FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Добавляем тестируемый исполняемый файл
add_executable(omegaladon
    tests/array_test.cpp
)

# Линкуем библиотеки Google Test
target_link_libraries(omegaladon
    PRIVATE
    omegaladonLib
    gtest
    gtest_main
)

enable_testing()
add_test(NAME omegaladon COMMAND omegaladon)
