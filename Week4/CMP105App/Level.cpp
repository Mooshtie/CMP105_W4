#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	testSprite.setInput(input);

	texture.loadFromFile("gfx/Goomba.png");
	Goomb.setTexture(&texture2);
	Goomb.setSize(sf::Vector2f(50, 50));
	Goomb.setPosition(500, 500);
	Goomb.setWindow(window);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	testSprite.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	Goomb.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(Goomb);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}