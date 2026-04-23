cmake_minimum_required(VERSION 3.15)
project(ParticleSim)

set(CMAKE_CXX_STANDARD 17)

set(RAYLIB_DIR "D:/Programming/MiniProjects/ParticleSim/raylib/raylib-5.5_win64_mingw-w64")

include_directories(${RAYLIB_DIR}/include)
link_directories(${RAYLIB_DIR}/lib)

add_executable(ParticleSim
    main.cpp
    )

target_link_libraries(ParticleSim raylib opengl32 gdi32 winmm)