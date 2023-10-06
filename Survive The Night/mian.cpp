// The main game file

#include "globals.h"
#include "raylib.h"
#include "gameobjects.h"
#include "background.h"
#include "enemy.h"
#include "player.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Nocturnal");
	SetTargetFPS(60);

	Background background;
	Enemy enemy;
	Player player;

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