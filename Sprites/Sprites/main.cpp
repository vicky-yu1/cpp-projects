// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 780), "Sprites!");
	sf::Texture playerTex;
	playerTex.loadFromFile("Textures/player_ship.png"); //loads spaceship file

	sf::Sprite playerSprite; //create new sprite
	playerSprite.setTexture(playerTex); //assign the texture to the sprite
	playerSprite.setOrigin(32, 32); //changes center of image since picture is 64px by 64px
	playerSprite.setPosition(100, 100); //set the top-left corner of the sprite to the center of the screen
	playerSprite.setScale(1.5, 1.5); //set the width and height of the sprite to 1.5 times that of the original image

	bool movingUp = false;
	bool movingDown = false;
	bool movingLeft = false;
	bool movingRight = false;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::W) {
					movingUp = true;
				}
				if (event.key.code == sf::Keyboard::S) {
					movingDown = true;
				}
				if (event.key.code == sf::Keyboard::A) {
					movingLeft = true;
				}
				if (event.key.code == sf::Keyboard::D) {
					movingRight = true;
				}
			}
			if (event.type == sf::Event::KeyReleased) {
				if (event.key.code == sf::Keyboard::W) {
					movingUp = false;
				}
				if (event.key.code == sf::Keyboard::S) {
					movingDown = false;
				}
				if (event.key.code == sf::Keyboard::A) {
					movingLeft = false;
				}
				if (event.key.code == sf::Keyboard::D) {
					movingRight = false;
				}
			}
		}
		sf::Vector2f movement(0, 0);

		if (movingUp) {
			movement.y -= 0.1f;
		}
		if (movingDown) {
			movement.y += 0.1f;
		}
		if (movingRight) {
			movement.x += 0.1f;
		}
		if (movingLeft) {
			movement.x -= 0.1f;
		}

		playerSprite.move(movement);
		window.clear();
		window.draw(playerSprite);
		window.display();
	}

}

