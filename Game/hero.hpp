#ifndef HERO_HPP
#define HERO_HPP

#include <SFML/Graphics.hpp>

class hero
{
	public:
		hero(float x, float y, sf::Texture text);
		void move(float dx, float dy);
		sf::RectangleShape returnRect();
	private:
		sf::RectangleShape heroRect_;
		sf::Texture text_;
};

#endif