// The main game file

#include "globals.h"
#include "raylib.h"
#include "gameobjects.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Survive The Night");
	SetTargetFPS(60);

	for (GameObjects* gameObjects : gameObjects) { gameObjects->update(); }

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObjects : gameObjects) { gameObjects->render(); }

		EndDrawing();
	}

	CloseWindow();

	return 0; 
}