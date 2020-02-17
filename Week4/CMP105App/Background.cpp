#include "Background.h"

Background::Background()
{
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
		speed = 500;
		setVelocity(speed, 0);
		move(getVelocity() * dt);
	}
}

void Background::update(float dt)
{
}