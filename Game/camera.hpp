#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <SFML/Graphics.hpp>
#include <vector>

class camera
{
	public:
		camera(float x, float y, float zoom);
		void changeParam(float dx, float dy, float dzoom);
		sf::CircleShape zoom(const sf::CircleShape& before);
		sf::RectangleShape zoom(const sf::RectangleShape& before);
	private:
		float x_, y_, zoom_;
};

#endif