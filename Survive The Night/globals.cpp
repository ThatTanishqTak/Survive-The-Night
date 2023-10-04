#include "globals.h"

std::list<GameObjects*> gameObjects;

const int windowWidth = 1080;
const int windowHeight = 600;

Vector2 mousePos = GetMousePosition();

float spawnTime = 5.0f;
float elapsedTime = 0.0f;