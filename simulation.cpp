#include "simulation.hpp"
#include <vector>
#include <utility>

void Simulation::Draw()
{
	grid.Draw();
}

void Simulation::SetCellValue(int row, int column, int value)
{
	grid.SetValue(row, column, value);
}

int Simulation::CountLiveNeighbours(int row, int column)
{	
	int liveNeighbours = 0;
	std::vector<std::pair<int, int>> neighbourOffsets =
	{
		{ -1, 0 },    // Above
		{ 1, 0 },     // Below
		{ 0, -1 },    // Left
		{ 0 , 1},     // Right
		{ -1, -1 },   // Upper Left
		{ -1, 1 },    // Upper Right
		{ 1, -1 },    // Lower Left
		{ 1, 1 }      // Lower Right
	};

	for (const auto& offset : neighbourOffsets)
	{
		int neighbourRow = (row + offset.first + grid.GetRows()) % grid.GetRows();                 // for toroidal grid --> change to bigger grid
		int neighbourColumn = (column + offset.second + grid.GetColumns()) % grid.GetColumns();    // for toroidal grid
		liveNeighbours += grid.GetValue(neighbourRow, neighbourColumn);
	}

	return liveNeighbours;
}
