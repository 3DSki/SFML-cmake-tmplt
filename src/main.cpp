#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Test CMake Project");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
