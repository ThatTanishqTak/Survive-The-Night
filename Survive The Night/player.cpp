#include "player.h"

Player::Player() { gameObjects.push_back(this); }

Player::~Player()
{

}

void Player::update()
{
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { mousePos = GetMousePosition(); }
}

void Player::render()
{
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { DrawCircle(static_cast<int>(mousePos.x), static_cast<int>(mousePos.y), radius, RED); }
}