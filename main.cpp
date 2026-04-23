#include "D:\Programming\MiniProjects\ParticleSim\raylib\raylib-5.5_win64_mingw-w64\include\raylib.h"

int main() {
    const int SCREEN_W = 1280;
    const int SCREEN_H = 720;

    InitWindow(SCREEN_W, SCREEN_H, "Particle Simulator");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Particle Simulator - Phase 1", 40, 40, 24, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}