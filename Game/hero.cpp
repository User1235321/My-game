#include "hero.hpp"

hero::hero(float x, float y, sf::Texture text):
	text_(text)
	{
		heroRect_.setPosition({ x, y });
		heroRect_.setSize({ 60, 60 });
		heroRect_.setTexture(&text_);
	}

void hero::move(float dx, float dy)
{
	heroRect_.move({ dx, dy });
}

sf::RectangleShape hero::returnRect()
{
	return heroRect_;
}
