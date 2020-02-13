#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	// initialise game objects
	testTexture.loadFromFile("gfx/Mushroom.png");
	testSprite.setTexture(&testTexture);
	testSprite.setSize(sf::Vector2f(50, 50));
	testSprite.setPosition(100, 100);
	testSprite.setInput(input);

	goombaTexture.loadFromFile("gfx/Goomba.png");
	goomba.setTexture(&goombaTexture);
	goomba.setSize(sf::Vector2f(100, 100));
	goomba.setPosition(500, 500);
	goomba.setWindow(window);

	mouseTexture.loadFromFile("gfx/icon.png");
	mouse.setTexture(&mouseTexture);
	mouse.setSize(sf::Vector2f(25, 25));
	mouse.setInput(input);

	lvlBackground.loadFromFile("gfx/Level1_1.png");
	level.setTexture(&lvlBackground);
	level.setSize(sf::Vector2f(11038, 675));
	level.setPosition(0, 0);
	level.setWindow(window);

	//makes the default mouse cursor invisible
	window->setMouseCursorVisible(false);
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
	mouse.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	goomba.update(dt);
	level.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(level);
	window->draw(testSprite);
	window->draw(goomba);
	window->draw(mouse);

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