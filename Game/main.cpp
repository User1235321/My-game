#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <Windows.h>

#include "camera.hpp"
#include "keyboardHandler.hpp"

int main()
{
    srand((unsigned int)time(NULL));

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML works!", sf::Style::None);
    camera newCamera(0, 0, 1);
    // TEST DATA
    std::vector< sf::CircleShape > myShapes;
    sf::CircleShape circle1;
    circle1.setFillColor(sf::Color::Green);
    circle1.setRadius(200);
    myShapes.push_back(circle1);
    sf::CircleShape circle2;
    circle2.setFillColor(sf::Color::Red);
    circle2.setRadius(20);
    circle2.setPosition({1000, 1000});
    myShapes.push_back(circle2);
    sf::CircleShape circle3;
    circle3.setFillColor(sf::Color::White);
    circle3.setRadius(100);
    circle3.setPosition({ 500, 500 });
    myShapes.push_back(circle3);
    sf::RectangleShape rect;
    rect.setFillColor(sf::Color::Yellow);
    rect.setPosition({ -500, -500 });
    rect.setSize({400, 400});
    //TEST END
    while (!GetAsyncKeyState(VK_ESCAPE))
    {

        cameraKeys(newCamera);
        /*while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }*/

        window.clear();
        for (auto & shape : myShapes)
        {
            window.draw(newCamera.zoom(shape));
        }
        window.draw(newCamera.zoom(rect));
        window.display();
    }
}