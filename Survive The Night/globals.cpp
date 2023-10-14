#include "globals.h"

std::list<GameObjects*> gameObjects;

const int windowWidth = 1240;
const int windowHeight = 720;

Vector2 mousePos = GetMousePosition();
float radius = 10.0f;
int bullets = 6;
bool lastBulletRemaining = false;

float spawnTime = 3.0f;
float elapsedTime = 0.0f;
float enemyMoveSpeed = 300.0f;

float gameTime = 0.0f;
int score = 0;

int currentFrame = 0;
float runningTime = 0.0f;
float updateTime = 1.0f / 12.0f;