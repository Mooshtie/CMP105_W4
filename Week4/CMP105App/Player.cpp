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

	if (input->isKeyDown(sf::Keyboard::W))
	{
		speedY = -200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		speedY = 200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		speedX = 200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		speedX = -200;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
}