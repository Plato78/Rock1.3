
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Grass.h"
#include "Player.h"
#include "Textobj.h"
#include "game.h"
using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(width, height), WINDOW_TITLE);
	window.setFramerateLimit(FPS);
	Player player;
	Weed weed(Vector2f{ 0.f,0.f }, "Weed1.jpg");
	Score score(Vector2f{ 1400.f,10.f });
	Game game;
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		player.update();
		score.updateText(player.getScore());
		game.update(game.getScore());
		// ��������� ���� 
		window.clear();
		weed.draw(window);
		score.draw(window);
		player.draw(window,player);
		game.draw(window);
		window.display();
	}

	return 0;
}