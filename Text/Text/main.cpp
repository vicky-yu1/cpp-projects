#include "stdafx.h"
#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Text");
	sf::Text myText;
	sf::Font myFont;
	myFont.loadFromFile("font/Candal.ttf");

	myText.setFont(myFont);
	myText.setString("Rubber Duckies");
	myText.setCharacterSize(24);
	myText.setFillColor(sf::Color::White);


	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//create marquee
		myText.move(0.04f, 0); //speed of text moving
		if (myText.getPosition().x > 400) { //if the text has gone off the screen, reposition
			myText.setPosition(-200, 0);
		}
		window.clear();
		window.draw(myText);
		window.display();
	}
}