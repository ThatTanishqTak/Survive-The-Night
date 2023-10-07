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
	Texture2D cat;

	struct EnemyInstance
	{
		Rectangle enemyRect;
		bool isAlive;
	};
	std::vector<EnemyInstance> enemies;

	void spawnEnemy();
	int updateAnimations(int maxFrame);
};

#endif