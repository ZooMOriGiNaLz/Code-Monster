#include "raylib.h"
#include <memory>
#include "Game.h"

int main(void)
{
	std::unique_ptr<Game> game = std::make_unique<Game>();

	game->CreateWindow();

    while (!WindowShouldClose()) 
    {
		game->Update();
        BeginDrawing();
        ClearBackground(BLACK);
		game->Render();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}