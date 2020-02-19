#include "Background.h"

Background::Background()
{
	speed = 0;
}

Background::~Background()
{
}

void Background::handleInput(float dt)
{
	if (input->isMouseRDown())
	{
		speed = -1000;
		setVelocity(speed, 0);
		move(getVelocity() * dt);
	}
	if (input->isMouseLDown())
	{
		speed = 1000;
		setVelocity(speed, 0);
		move(getVelocity() * dt);
	}
}

void Background::update(float dt)
{
	sf::Vector2u pos = window->getSize();
	if (getPosition().x > pos.x - 1200)
	{
		setPosition(0, 0);
	}
	if (getPosition().x + 11038 < pos.x)
	{
		setPosition(-9838, 0); //9838
	}
}