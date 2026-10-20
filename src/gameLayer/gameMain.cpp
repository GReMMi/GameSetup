#include <raylib.h>
#include "gameMain.h"
struct GameData {
   float positionX = 100;
   float positionY = 100;

}GameData;

bool initGame() {
    return true;
}
bool updateGame() {
    DrawText("New Game", 150, 170, 40, {100,255,50,255});
    DrawRectangle(70, 50, 100, 50, MAROON);
    DrawRectangle(70, 70, 100, 30, BLACK);
    DrawRectangle(70, 90, 100, 20, YELLOW);

    float deltaTime = GetFrameTime();
    if (deltaTime > 1.f / 5) {deltaTime = 1 / 5.f;}
    if (IsKeyDown(KEY_W)) { GameData.positionY -= 200.0 * deltaTime;}
    if (IsKeyDown(KEY_S)) { GameData.positionY += 200.0 * deltaTime;}
    if (IsKeyDown(KEY_A)) { GameData.positionX -= 200.0 * deltaTime;}
    if (IsKeyDown(KEY_D)) { GameData.positionX += 200.0 * deltaTime;}
    DrawRectangle(GameData.positionX, GameData.positionY, 50, 50, PINK);

    return true;
}

void closeGame() {

}