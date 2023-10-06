#include "globals.h"

std::list<GameObjects*> gameObjects;

const int windowWidth = 1240;
const int windowHeight = 720;

Vector2 mousePos = GetMousePosition();
float radius = 10.0f;

float spawnTime = 0.0f;
float elapsedTime = 0.0f;
float moveSpeed = 300.0f;
bool isAlive = false;

float gameTime = 0.0f;
int score = 0;