#include <raylib.h>
#include <iostream>
#include "simulation.hpp"

int main()
{	
	Color GREY = { 29, 29,29, 255 };
	const int WINDOW_WIDTH = 750;
	const int WINDOW_HEIGHT = 750;
	const int CELL_SIZE = 25;
	int FPS = 12;

	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Conway's Game of Life");
	SetTargetFPS(FPS);

	Simulation simulation = Simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);
	simulation.SetCellValue(5, 29, 1);
	simulation.SetCellValue(6, 0, 1);
	simulation.SetCellValue(5, 0, 1);
	simulation.SetCellValue(4, 0, 1);

	while (WindowShouldClose() == false)
	{
		simulation.Update();
		BeginDrawing();
		ClearBackground(GREY);
		simulation.Draw();
		EndDrawing();
	}

	CloseWindow();
	return 0;
}