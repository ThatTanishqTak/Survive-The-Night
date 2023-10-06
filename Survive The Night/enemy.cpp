#include "enemy.h"

Enemy::Enemy() { gameObjects.push_back(this); }

Enemy::~Enemy()
{

}

void Enemy::update()
{
	spawnEnemy();

	if (CheckCollisionCircleRec(mousePos, radius, enemy) && isAlive)
	{ 
		score += 10;
		isAlive = false;
	}

	if (isAlive) { enemy.x += moveSpeed * GetFrameTime(); }
}

void Enemy::render()
{
	if (isAlive)
	{
		DrawRectangle(static_cast<int>(enemy.x), static_cast<int>(enemy.y),
		static_cast<int>(enemy.width), static_cast<int>(enemy.height), WHITE);
	}
}

void Enemy::spawnEnemy()
{
	elapsedTime += GetFrameTime();
	if (elapsedTime > spawnTime)
	{
		isAlive = true;
		elapsedTime = 0.0f;

		enemy = { static_cast<float>(GetRandomValue(-10, -5)), static_cast<float>(GetRandomValue(10, windowHeight - 100)), 50.0f, 50.0f };
		spawnTime = static_cast<float>(GetRandomValue(0, 5));
	}
}
