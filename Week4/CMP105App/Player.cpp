#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	speedX = 0;
	speedY = 0;

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		speedY = -200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		speedY = 200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		speedX = 200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		speedX = -200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
}