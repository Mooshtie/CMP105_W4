#pragma once
#include "framework/GameObject.h"
class Enemy :
	public GameObject
{
public:
	Enemy();
	~Enemy();

	float speedX;
	float speedY;
	sf::RenderWindow* window;

	void update(float dt);
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };
};

