#pragma once
#include "Framework/GameObject.h"
class Cursor :
	public GameObject
{
public:
	Cursor();
	~Cursor();

	int curX, curY;

	void handleInput(float dt);
};