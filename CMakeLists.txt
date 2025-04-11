cmake_minimum_required(VERSION 3.10)
project(SudokuProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# List all source files in the "src" folder
set(SOURCES

src/main.cpp
src/generator.cpp
src/sudoku.cpp
src/sudokuio.cpp
src/utility.cpp

)

# Create the executable
add_executable(SudokuProject ${SOURCES})
