#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

class GameObjects
{
public:
	GameObjects() = default;
	~GameObjects() = default;

	virtual void update() = 0;
	virtual void render() = 0;
};

#endif