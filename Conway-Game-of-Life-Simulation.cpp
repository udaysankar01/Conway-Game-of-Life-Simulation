#include <raylib.h>
#include <iostream>

int main()
{	
	Color GREY = { 29, 29,29, 255 };
	const int WINDOW_WIDTH = 750;
	const int WINDOW_HEIGHT = 750;
	int FPS = 12;

	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Conway's Game of Life");
	SetTargetFPS(FPS);

	while (WindowShouldClose() == false)
	{
		BeginDrawing();
		ClearBackground(GREY);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}