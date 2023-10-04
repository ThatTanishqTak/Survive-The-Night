// The main game file

#include "globals.h"
#include "raylib.h"
#include "gameobjects.h"
#include "player.h"
#include "enemy.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Survive The Night");
	SetTargetFPS(60);

	Player player;
	Enemy enemy;

	while (!WindowShouldClose())
	{
		for (GameObjects* gameObjects : gameObjects) { gameObjects->update(); }

		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObjects : gameObjects) { gameObjects->render(); }

		EndDrawing();
	}

	CloseWindow();

	return 0; 
}