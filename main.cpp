#include <SFML/Graphics.hpp>
#include "Vector2D.h"

int main() {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode::getFullscreenModes()[4], "SFML TEST", sf::Style::Default, settings);

    sf::VertexArray shape(sf::Quads, 4);

    sf::CircleShape shape2(150, 8);

    shape2.setFillColor(sf::Color(0, 0, 255, 85));

    shape[0].position = sf::Vector2f(0, 0);
    shape[1].position = sf::Vector2f(0, 300);
    shape[2].position = sf::Vector2f(300, 300);
    shape[3].position = sf::Vector2f(300, 0);


    shape[0].color = sf::Color::Black;
    shape[1].color = sf::Color::Red;
    shape[2].color = sf::Color::Black;
    shape[3].color = sf::Color::Red;


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(shape);
        window.draw(shape2);

        window.display();
    }

    return EXIT_SUCCESS;
}