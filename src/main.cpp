#include <iostream>
#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h>

int main() {

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 600, "gameWindow");

    rlImGuiSetup(true);

    while(!WindowShouldClose()) {
        BeginDrawing();

        rlImGuiBegin();

        ClearBackground(RAYWHITE);
        DrawText("Congratulations GReMMi!", 150, 170, 40, {100,255,50,255});
        DrawRectangle(70, 50, 100, 50, MAROON);
        DrawRectangle(70, 70, 100, 30, BLACK);
        DrawRectangle(70, 90, 100, 20, YELLOW);

        rlImGuiEnd();
        EndDrawing();


    }
    rlImGuiShutdown();
    CloseWindow();
    return 0;
}