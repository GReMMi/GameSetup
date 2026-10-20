#include <iostream>
#include <imgui.h>
#include <raylib.h>
#include <rlImGui.h>
#include <gameMain.h>

int main(void) {

#if PRODUCTION_BUILD == 1
    SetTraceLogLevel(LOG_NONE); // no log to the console when running
#endif
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 600, "gameWindow");
    SetExitKey(KEY_NULL); // Disable esc from closing window
    SetTargetFPS(60);
    rlImGuiSetup(true);

#pragma region imgui
    // ImGuiIO &io = ImGui::GetIO();
    // io.FontGlobalScale = 1.4;
    // io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    // //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard; // Enable Keyboard Navigation
    // //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamePad; // Enable GamePad Navigation
    //


#pragma endregion imgui
    if (!initGame()) {
        return 0;
    }

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
      if (!updateGame()) {
          CloseWindow();
      }

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
    closeGame();
    return 0;
}