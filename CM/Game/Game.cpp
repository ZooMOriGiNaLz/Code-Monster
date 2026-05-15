#include "Game.h"

Game::Game()
{

}

Game::~Game()
{
	std::cout << "Game unloaded!" << std::endl;
}

void Game::Update()
{

}

void Game::Render()
{
	DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
}

void Game::CreateWindow()
{
	InitWindow(screenWidth, screenHeight, windowTitle.c_str());
	SetTargetFPS(targetFPS);
}
