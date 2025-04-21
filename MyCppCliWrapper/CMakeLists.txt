# MyCppCliWrapper/CMakeLists.txt
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MyCppCliWrapper SHARED
    MyCppCliWrapper.cpp
)

target_include_directories(MyCppCliWrapper PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ../MyCppLibrary)

if(MSVC)
    #set_target_properties(cs_log_mel_spectrogram PROPERTIES COMMON_LANGUAGE_RUNTIME "")
    #set_property(TARGET MyCppCliWrapper PROPERTY COMMON_LANGUAGE_RUNTIME "")
    set_property(TARGET MyCppCliWrapper PROPERTY COMMON_LANGUAGE_RUNTIME "netcore")
    set_property(TARGET MyCppCliWrapper PROPERTY DOTNET_TARGET_FRAMEWORK "net8.0")
    target_compile_options(MyCppCliWrapper PRIVATE /EHsc)
    target_link_libraries(MyCppCliWrapper PRIVATE MyCppLibrary)
endif()