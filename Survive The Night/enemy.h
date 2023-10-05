#ifndef ENEMY_H
#define ENEMY_H

#include "globals.h"
#include "raylib.h"

class Enemy : public GameObjects
{
public:
	Enemy();
	~Enemy();

	virtual void update();
	virtual void render();

private:
	Rectangle enemy;

	void spawnEnemy();
};

#endif