#include "enemy.h"

Enemy::Enemy() { gameObjects.push_back(this); }

Enemy::~Enemy()
{

}

void Enemy::update()
{
	elapsedTime += GetFrameTime();
	if (elapsedTime >= spawnTime) { elapsedTime = 0.0f; }

	enemy = { static_cast<float>(GetRandomValue(10, windowWidth)), static_cast<float>(GetRandomValue(10, windowHeight)), 50.0f, 50.0f };
}

void Enemy::render()
{
	if (elapsedTime >= spawnTime) { DrawRectangle(enemy.x, enemy.y, enemy.width, enemy.height, WHITE); }
}