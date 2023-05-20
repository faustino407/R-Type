#pragma once
#include "Background.h"
#include "player.h"
#include "Enemy.h"
#include <vector>

class Game
{
public:
	Game();
	void init();
	void update();
	void render();
	void handleInput();
	void dispose();

	//bool collide(float x1, float y1, float r1, float x2, float y2, float r2) {
		//float distX = x1 - x2;
		//float distX = y1 - y2;

		//float dist = sqrt(distX * distX + distY * distY);

	//}


private:
	Background* background;
	player player;

	std::vector<Enemy*> enemies;

};

