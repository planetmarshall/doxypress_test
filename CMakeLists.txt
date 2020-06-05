cmake_minimum_required(VERSION 3.10)

project(doxypress_test)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(doxypress_test main.cpp)
target_compile_features(doxypress_test PUBLIC cxx_std_17)
target_compile_options(doxypress_test PUBLIC -stdlib=libc++)
target_link_options(doxypress_test PUBLIC -stdlib=libc++)
