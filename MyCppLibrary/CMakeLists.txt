# MyCppLibrary/CMakeLists.txt
add_library(MyCppLibrary STATIC
    MyCppLibrary.cpp
)
target_include_directories(MyCppLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})