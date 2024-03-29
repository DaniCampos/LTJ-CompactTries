cmake_minimum_required(VERSION 3.7)

# specify the C++ standard
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
        set(CXX_FILESYSTEM_LIBRARIES "stdc++fs")
endif()


# set the project name
project(LTJ-CompactTries VERSION 0.0.0 LANGUAGES C CXX)

# include files
include_directories( 
    # ~/libs/sdsl-lite/external/libdivsufsort/include/
    # ~/libs/sdsl-lite/include
    # ./libs/sdsl-lite/lib 
    ./include
    )


include_directories(
        # ${CMAKE_HOME_DIRECTORY}/include
        ${CMAKE_BINARY_DIR}/libs/sdsl-lite/include
        ${CMAKE_BINARY_DIR}/libs/sdsl-lite/external/libdivsufsort/include/
        # ${CMAKE_HOME_DIRECTORY}/external/googletest/include
        # ${CMAKE_HOME_DIRECTORY}/external/sdsl-lite/external/FastPFor/headers/
        # ${CMAKE_HOME_DIRECTORY}/external/repair_gn
        # ${STXXL_INCLUDE_DIRS}
        )

# link_directories(
#     ./libs/sdsl-lite/external/libdivsufsort/include/
#     ./libs/sdsl-lite/lib)

# link_libraries(sdsl divsufsort divsufsort64)

# add the executable
add_executable(build_index src/build_index.cpp)
add_executable(query_index src/query_index.cpp)

# 3rd party libs
add_subdirectory(./libs/sdsl-lite)
target_link_libraries( build_index PUBLIC stdc++fs sdsl divsufsort divsufsort64)
target_link_libraries( query_index PUBLIC stdc++fs sdsl divsufsort divsufsort64)