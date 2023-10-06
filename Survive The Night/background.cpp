#include "background.h"
#include <string>

Background::Background()
{
	background = LoadTexture("Textures/Background/Image.png");
	gameObjects.push_back(this); 
}

Background::~Background() { UnloadTexture(background); }

void Background::update() { gameTime += GetFrameTime(); }

void Background::render()
{
	DrawTextureEx(background, { 0, 0 }, 0.0f, 1.0f, WHITE);

	DrawText(("TIME: " + formatTime(gameTime)).c_str(), windowWidth - 145, 0, 24, RED);
	DrawText(("SCORE: " + std::to_string(score)).c_str(), 10, 0, 24, RED);
	DrawText(("BULLETS: " + std::to_string(bullets)).c_str(), 10, 24, 24, RED);

	if(bullets == 0){ DrawText("RELOAD!", 5, windowHeight - 48, 24, RED); }
}

std::string Background::formatTime(float gameTime)
{
	int minutes = static_cast<int>(gameTime) / 60;
	int seconds = static_cast<int>(gameTime) % 60;
	
	std::ostringstream time;
	time << std::setw(2) << std::setfill('0') << minutes << ":" << std::setw(2) << seconds;

	return time.str();
}