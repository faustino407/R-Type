#include "Game.h"

Game::Game() {}
void Game::init() {
	background = new Background("res/Fundo.png");
	player.init();

	for (int i = 0; i < 4; i++) {
		enemies.emplace_back(new Enemy(1));
		enemies.emplace_back(new Enemy(2));
		
	}
}
void Game::update() {
	background->update();
	player.update();

	for (auto& enemy : enemies) {
		enemy->update();
	}
}
void Game::handleInput() {
	player.handleInput();
}
void Game::render() {
	background->render();
	player.render();

	for (auto& enemy : enemies) {
		enemy->render();
	}
}
void Game::dispose() {
	background->dispose();
	player.dispose();

	for (auto& enemy : enemies) {
		enemy->dispose();
		delete enemy;
	}
	enemies.clear();
}