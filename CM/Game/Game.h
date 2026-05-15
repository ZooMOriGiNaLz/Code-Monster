#pragma once
#include "raylib.h"
#include <iostream>

class Game
{
public:
	// Constructor and destructor
	Game();
	~Game();
	// Window management
	void CreateWindow();
	// Game loop
	void Update();
	void Render();
private:
	// Window settings
	const int screenWidth = 640;
	const int screenHeight = 480;
	int targetFPS = 60;
	std::string windowTitle = "Raylib Game";
};

