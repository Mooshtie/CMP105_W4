#pragma once
#include "framework/GameObject.h"
class Background :
	public GameObject
{
public:
	Background();
	~Background();

	float speed;
	sf::RenderWindow* window;

	void handleInput(float dt);
	void update(float dt);
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };
};