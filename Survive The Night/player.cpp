#include "player.h"

Player::Player() { gameObjects.push_back(this); }

Player::~Player()
{

}

void Player::update()
{
	if(bullets > 0)
	{
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{

			mousePos = GetMousePosition();
			bullets--;
		}

		if (bullets == 1) { lastBulletRemaining = true; }
	}
	if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) { bullets = 6; }

	if (bullets <= 0) { bullets = 0; }
}

void Player::render()
{
	if(bullets > 0)
	{
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { DrawCircle(static_cast<int>(mousePos.x), static_cast<int>(mousePos.y), radius, RED); }
	}
}