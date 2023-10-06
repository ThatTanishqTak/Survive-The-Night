#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "globals.h"
#include "raylib.h"
#include <sstream>
#include <iomanip>

class Background : public GameObjects
{
public:
	Background();
	~Background();

	virtual void update();
	virtual void render();

private:
	Texture2D background;

	std::string formatTime(float gameTime);
};

#endif