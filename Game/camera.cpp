#include "camera.hpp"

camera::camera(float x, float y, float zoom):
	x_(x),
	y_(y),
	zoom_(zoom) {}

void camera::changeParam(float dx, float dy, float dzoom)
{
	x_ += dx;
	y_ += dy;
	zoom_ += dzoom;
}

sf::CircleShape camera::zoom(const sf::CircleShape & before)
{
	sf::CircleShape after(before);
	after.scale({ zoom_, zoom_ });
	if (after.getScale().x >= 0)
	{
		sf::Vector2f distance = before.getPosition() * zoom_;
		after.setPosition(distance);
		after.move({ x_, y_ });
	}
	else
	{
		after.scale({ 0, 0 });
	}
	return after;
}

sf::RectangleShape camera::zoom(const sf::RectangleShape & before)
{
	sf::RectangleShape after(before);
	after.scale({ zoom_, zoom_ });
	if ((after.getScale().x >= 0) && ((after.getScale().y >= 0)))
	{
		sf::Vector2f distance = before.getPosition() * zoom_;
		after.setPosition(distance);
		after.move({ x_, y_ });
	}
	else
	{
		after.scale({ 0, 0 });
	}
	return after;
}