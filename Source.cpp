#include <SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML");
	sf::CircleShape circle;
	circle.setRadius(150);
	circle.setPosition(50, 50);
	circle.setFillColor(sf::Color::Green);
	circle.setOutlineThickness(5);
	circle.setOutlineColor(sf::Color::Red);
	sf::CircleShape triangle(80, 3);
	triangle.setPosition(500, 150);
	triangle.setFillColor(sf::Color::Blue);
	triangle.setOutlineThickness(5);
	triangle.setOutlineColor(sf::Color::White);
	sf::Font font;
	if (!font.loadFromFile("ArialBlack.ttf")) {}
	sf::Text text;
	text.setFont(font);
	text.setString("This is a circle and triangle");
	text.setCharacterSize(24);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(text);
		window.draw(circle);
		window.draw(triangle);
		window.display();
	}
	return 0;
}