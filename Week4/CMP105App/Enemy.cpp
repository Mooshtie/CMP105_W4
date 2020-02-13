#include "Enemy.h"

Enemy::Enemy()
{
	speedX = 300;
	speedY = 300;
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	setVelocity(speedX, speedY);
	move(getVelocity() * dt);

	sf::Vector2u pos = window->getSize();
	if (getPosition().x + 100 > pos.x)
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
	if (getPosition().y + 100 > pos.y)
	{
		speedY = -300;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
	if (getPosition().y < 0)
	{
		speedY = 300;
		setVelocity(speedX, speedY);
		move(getVelocity() * dt);
	}
}