#ifndef MYFLOOR_HPP
#define MYFLOOR_HPP

#include <SFML/Graphics.hpp>
#include <vector>

class myFloor
{
	public:
		myFloor(int xStart, int yStart, int xEnd, int yEnd, int size, sf::Texture text);
		std::vector< sf::RectangleShape > returnVec();
	private:
		std::vector< sf::RectangleShape > rects_;
		sf::Texture standartText_;
};

#endif