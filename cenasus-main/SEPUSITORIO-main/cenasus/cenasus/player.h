#pragma once
#include <allegro5/allegro.h>
#include <vector>
#include "Bullet.h"

class player {
public:
	player();
	void init();
	void update();
	void handleInput();
	void render();
	void dispose();
	void fireBullet();

private:
	// Posição e tamanho
	float x;
	float y;
	int lives;
	// vetor
	float dx;
	float dy;
	float speed;
	//movimento
	bool left;
	bool right;
	bool up;
	bool down;
	bool firing;

	ALLEGRO_KEYBOARD_STATE key_state;
	ALLEGRO_BITMAP* bitmap;

	std::vector<Bullet*> bullets;

	ALLEGRO_TIMER* timer;
	ALLEGRO_EVENT_QUEUE* event_queue;
};