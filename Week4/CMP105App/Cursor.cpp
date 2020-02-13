#include "Cursor.h"

Cursor::Cursor()
{
}

Cursor::~Cursor()
{
}

void Cursor::handleInput(float dt)
{
	curX = input->getMouseX();
	curY = input->getMouseY();

	if (getPosition().x != curX || getPosition().y != curY)
	{
		setPosition(curX, curY);
	}
}