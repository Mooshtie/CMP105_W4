#include "Background.h"

Background::Background()
{
}

Background::~Background()
{
}

void Background::handleInput(float dt)
{
	speed = 0;

	if (input->isKeyDown(sf::Keyboard::Q))
	{
		speed = -200;
		setVelocity(speed, 0);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::E))
	{
		speed = 200;
		setVelocity(speed, 0);
		move(getVelocity() * dt);
	}
}

void Background::update(float dt)
{
	sf::Vector2u pos = window->getSize();
	if (window->getPosition().x > pos.x)
	{
		speed = 0;
	}
	if (window->getPosition().x < 0)
	{
		speed = 0;
	}
}