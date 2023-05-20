#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
class Weed {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Weed(sf::Vector2f pos, std::string fileName) {
		texture.loadFromFile(fileName);
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}

	void draw(sf::RenderWindow& window) {
		window.draw(sprite);
	}
};
