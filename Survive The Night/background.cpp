#include "background.h"
#include <string>

Background::Background() { gameObjects.push_back(this); }

Background::~Background()
{

}

void Background::update()
{
	gameTime += GetFrameTime();
}

void Background::render()
{
	DrawText(("TIME: " + formatTime(gameTime)).c_str(), windowWidth - 150, 0, 24, RED);
	DrawText(("SCORE: " + std::to_string(score)).c_str(), 0, 0, 24, RED);
}

std::string Background::formatTime(float gameTime)
{
	int minutes = static_cast<int>(gameTime) / 60;
	int seconds = static_cast<int>(gameTime) % 60;
	
	std::ostringstream time;
	time << std::setw(2) << std::setfill('0') << minutes << ":" << std::setw(2) << seconds;

	return time.str();
}
