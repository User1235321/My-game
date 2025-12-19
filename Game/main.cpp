#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <ctime>

#include "camera.hpp"
#include "keyboardHandler.hpp"
#include "hero.hpp"
#include "myFloor.hpp"

int main()
{
    srand((unsigned int)time(NULL));

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML works!", sf::Style::None);
    camera newCamera(0, 0, 1);

    hero mainCharter(1920 / 2, 1080 / 2, sf::Texture("images/standartHero.png"));
    myFloor mainFloor(-2040, -2040, 2040, 2040, 60, sf::Texture("images/standartFloor.png"));

    auto start = std::chrono::system_clock::now();
    while (!GetAsyncKeyState(VK_ESCAPE))
    {
        if (std::chrono::duration< double >(std::chrono::system_clock::now() - start).count() > 0.001)
        {
            cameraKeys(newCamera, mainCharter);
            window.clear();
            for (const sf::RectangleShape& rect : mainFloor.returnVec())
            {
                window.draw(newCamera.zoom(rect));
            }
            window.draw(newCamera.zoom(mainCharter.returnRect()));
            window.display();
            start = std::chrono::system_clock::now();
        }
    }
} 