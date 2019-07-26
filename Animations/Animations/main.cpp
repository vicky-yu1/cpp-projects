#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <SFML\Graphics\Rect.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "Sprites!");

	sf::Sprite mySprite;
	sf::Texture myTexture;
	sf::IntRect rect[7]; //to make rectangle that can be used to display a part of the image
	rect[0] = sf::IntRect(0, 0, 64, 64);
	rect[1] = sf::IntRect(64, 0, 64, 64);
	rect[2] = sf::IntRect(128, 0, 64, 64);
	rect[3] = sf::IntRect(192, 0, 64, 64);
	rect[4] = sf::IntRect(0, 64, 64, 64);
	rect[5] = sf::IntRect(64, 64, 64, 64);
	rect[6] = sf::IntRect(128, 64, 64, 64);


	myTexture.loadFromFile("Textures/walk_cycle.png");

	mySprite.setTexture(myTexture);
	mySprite.setOrigin(15, 16);
	mySprite.setScale(1.5, 1.5);
	mySprite.setPosition(100, 100);

	sf::Clock clock;
	int imgCount = 0;
	float timer = 0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		mySprite.setTextureRect(rect[imgCount]);
		timer = clock.getElapsedTime().asSeconds();
		if (timer > 0.1f) {
			if (imgCount < 6) {
				imgCount++;
			}
			else { //reached end of sprite, reset
				imgCount = 0;
			}
			clock.restart();
		}
		window.clear();
		window.draw(mySprite);
		window.display();
	}
}