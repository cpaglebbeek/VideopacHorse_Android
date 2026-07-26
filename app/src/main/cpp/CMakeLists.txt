# CMakeLists.txt — VideopacHorse_Android JNI-laag (placeholder v0.0.1-Baer)
# Compileert de C11-core uit de zusterrepo mee; geen kopie van core-code hier.
cmake_minimum_required(VERSION 3.22)
project(videopachorse C)

set(CORE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../VideopacHorse_Core)
file(GLOB CORE_SRC ${CORE_DIR}/src/*.c)

add_library(g7000 SHARED g7000_jni.c ${CORE_SRC})
target_include_directories(g7000 PRIVATE ${CORE_DIR}/include)
target_compile_options(g7000 PRIVATE -std=c11 -O2 -Wall -Wextra)
target_link_libraries(g7000 log)
