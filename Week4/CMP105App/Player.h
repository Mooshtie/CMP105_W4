#pragma once
#include "Framework/GameObject.h"
class Player :
	public GameObject
{
public:
	Player();
	~Player();

	float speedX, speedY;

	void handleInput(float dt);
};