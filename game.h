#pragma once
#include "Player.h"
#include "settings.h"
#include "Textobj.h"

class Game {
private:
	int score;
	sf::Texture texture;
	sf::Texture texture1;
	sf::Sprite sprite;

public:
	void Secondlvl(std::string fileName) {
		texture.loadFromFile(next_lvl_file_name);
	}
	void update(int score) {
		if (score >= 500) {
			sprite.setTexture(texture1);
		}
	}
	void draw(sf::RenderWindow& window) {
		window.draw(sprite);
	}
	int getScore() {
		return score;
	}
};