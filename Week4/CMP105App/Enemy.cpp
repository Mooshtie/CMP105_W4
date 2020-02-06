#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	speedX = 0;
	speedY = 0;

	sf::Vector2u pos = window->getSize();
	if (getPosition().x + 50 > pos.x)
	{
		speedX = -300;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (getPosition().x < 0)
	{
		speedX = 300;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (getPosition().y + 50 > pos.y)
	{
		speedY = -300;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (getPosition().y < 0)
	{
		speedY = -300;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
}