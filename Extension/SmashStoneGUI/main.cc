#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SmashStoneGUI");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

	return 0;
}
