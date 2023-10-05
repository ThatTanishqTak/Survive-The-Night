#ifndef GLOBALS_H
#define GLOBALS_H

#include "gameobjects.h"
#include "raylib.h"
#include <list>

extern std::list<GameObjects*> gameObjects;

extern const int windowWidth;
extern const int windowHeight;

extern Vector2 mousePos;
extern float radius;

extern int count;
extern int maxEnemy;
extern float spawnTime;
extern float elapsedTime;
extern bool isAlive;

extern float gameTime;
extern int score;

#endif