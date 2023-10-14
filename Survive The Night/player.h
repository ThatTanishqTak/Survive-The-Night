#ifndef PLAYER_H
#define PLAYER_H

#include "globals.h"
#include "raylib.h"

class Player : public GameObjects
{
public:
	Player();
	~Player();

	virtual void update();
	virtual void render();
	
private:
};

#endif