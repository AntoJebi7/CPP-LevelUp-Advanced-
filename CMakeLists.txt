cmake_minimum_required(VERSION 3.28)

# Set the project name
project(AutoBuildProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Collect all .cpp files in the project directory
file(GLOB_RECURSE CPP_FILES "*.cpp")

# Loop over all .cpp files and create an executable for each
foreach(SOURCE_FILE ${CPP_FILES})
    # Extract the file name (without path and extension)
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)

    # Add an executable for each .cpp file
    add_executable(${EXEC_NAME} ${SOURCE_FILE}

    )
endforeach()
