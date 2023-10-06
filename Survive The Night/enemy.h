#ifndef ENEMY_H
#define ENEMY_H

#include "globals.h"
#include "raylib.h"
#include <vector>

class Enemy : public GameObjects
{
public:
	Enemy();
	~Enemy();

	virtual void update();
	virtual void render();

private:
	struct EnemyInstance
	{
		Rectangle enemyRect;
		bool isAlive;
	};
	std::vector<EnemyInstance> enemies;

	void spawnEnemy();
};

#endif