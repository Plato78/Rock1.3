#pragma once
#include "Player.h"
#include "settings.h"

class Player {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	int score;
public:
	Player() : score(0) {
		texture.loadFromFile(player_file_name);
		sprite.setTexture(texture);
	}

	void update() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			score++;
			
		}
	}

	void draw(sf::RenderWindow& window, Player& player) {
		window.draw(player.sprite);
	}

	int getScore() {
		return score;
	}
};