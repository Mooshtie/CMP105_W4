#pragma once
#include "framework/GameObject.h"
class Background :
	public GameObject
{
public:
	Background();
	~Background();

	sf::RenderWindow* window;

	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };
};

