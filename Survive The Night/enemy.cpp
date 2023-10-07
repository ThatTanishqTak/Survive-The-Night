#include "enemy.h"

Enemy::Enemy()
{
	cat = LoadTexture("Textures/Animals/Cat/Cat_Run.png");
	gameObjects.push_back(this); 
}

Enemy::~Enemy()
{
	UnloadTexture(cat);
}

void Enemy::update()
{
	for (auto& enemy : enemies)
	{
		if (enemy.isAlive)
		{
			if (bullets > 0)
			{
				if (CheckCollisionCircleRec(mousePos, radius, enemy.enemyRect))
				{
					score += 100;
					enemy.isAlive = false;
				}
			}

			enemy.enemyRect.x += enemyMoveSpeed * GetFrameTime();
		}
	}

	spawnEnemy();
}

void Enemy::render()
{
	for (const auto& enemy : enemies)
	{
		if (enemy.isAlive)
		{
			DrawRectangle(static_cast<int>(enemy.enemyRect.x), static_cast<int>(enemy.enemyRect.y),
			static_cast<int>(enemy.enemyRect.width), static_cast<int>(enemy.enemyRect.height), WHITE);
		}
	}
}

void Enemy::spawnEnemy()
{
	elapsedTime += GetFrameTime();
	if (elapsedTime > spawnTime)
	{
		elapsedTime = 0.0f;

		EnemyInstance newEnemy;
		newEnemy.enemyRect = { static_cast<float>(GetRandomValue(-30, -20)), static_cast<float>(GetRandomValue(100, windowHeight / 2)),
							   50.0f, 50.0f };

		newEnemy.isAlive = true;
		enemies.push_back(newEnemy);
		
		spawnTime = static_cast<float>(GetRandomValue(0, 3));
	}
}

int Enemy::updateAnimations(int maxFrame)
{
	runningTime += GetFrameTime();
	if (runningTime >= updateTime)
	{
		runningTime = 0.0f;
		currentFrame++;

		if (currentFrame > maxFrame) { currentFrame = 0; }
	}

	return currentFrame;
}