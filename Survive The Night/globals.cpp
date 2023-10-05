#include "globals.h"

std::list<GameObjects*> gameObjects;

const int windowWidth = 1080;
const int windowHeight = 600;

Vector2 mousePos = GetMousePosition();
float radius = 10.0f;

int count = 0;
int maxEnemy = 10;
float spawnTime = 5.0f;
float elapsedTime = 0.0f;
bool isAlive = false;

float gameTime = 0.0f;
int score = 0;