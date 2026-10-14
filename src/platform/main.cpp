#include <iostream>
#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h>

int main() {

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 600, "gameWindow");
    rlImGuiSetup(true);

#pragma region imgui
    // ImGuiIO &io = ImGui::GetIO();
    // io.FontGlobalScale = 1.4;
    // io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    // //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard; // Enable Keyboard Navigation
    // //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamePad; // Enable GamePad Navigation
    //


#pragma endregion imgui

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("New Game", 150, 170, 40, {100,255,50,255});
        DrawRectangle(70, 50, 100, 50, MAROON);
        DrawRectangle(70, 70, 100, 30, BLACK);
        DrawRectangle(70, 90, 100, 20, YELLOW);

#pragma region imgui windows
        // rlImGuiBegin();
        //
        // ImGui::PushStyleColor(ImGuiCol_WindowBg, {});
        // ImGui::PushStyleColor(ImGuiCol_DockingEmptyBg, {});
        // ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
        // ImGui::PopStyleColor(2);
        //
        // ImGui::Begin("test");
        // ImGui::Text("Hello World");
        // ImGui::Button("button");
        // ImGui::Button("button 2");
        // ImGui::End();
        //
        // ImGui::Begin("Window 2");
        // ImGui::Text("Second Window");
        // ImGui::Separator();
        // ImGui::NewLine();
        // static float a = 0;
        // ImGui::SliderFloat("slider", &a, 0, 1);
        // ImGui::End();
        //
        // rlImGuiEnd();
#pragma endregion imgui windows



        EndDrawing();

    }

    rlImGuiShutdown();
    CloseWindow();
    return 0;
}