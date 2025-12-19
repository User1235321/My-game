#include "myFloor.hpp"

myFloor::myFloor(int xStart, int yStart, int xEnd, int yEnd, int size, sf::Texture text)
{
	standartText_ = text;
	for (int i = 0; i < ((xEnd - xStart) / size); ++i)
	{
		for (int j = 0; j < ((yEnd - yStart) / size); ++j)
		{
			sf::RectangleShape newRect;
			newRect.setPosition({ (float)(xStart + size * i), (float)(yStart + size * j) });
			newRect.setSize({ (float)(size), (float)(size) });
			newRect.setTexture(&standartText_);
			rects_.push_back(newRect);
		}
	}
}

std::vector< sf::RectangleShape > myFloor::returnVec()
{
	return rects_;
}
