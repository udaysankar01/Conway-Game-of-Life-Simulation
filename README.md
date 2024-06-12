# Conway-Game-of-Life-Simulation

Game of Life is a cellular automaton devised by British Mathematician John Conway in 1970. It is a zero player game, meaning that its evolution is determined by its initial state, requiring no further input.

The universe of Game of Life is an infinite, 2D orthogonal grid  of square cells, each of which is in one of two possible states, live or dead. Every cell interacts with its eight neighbouring cells. Every cell is bound to follow these four given rules:

1. Any live cell with fewer than two live neighbors dies, as if by underpopulation.
2. Any live cell with two or three live neighbors lives on to the next generation.
3. Any live cell with more than three live neighbors dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

The initial pattern constitutes the seed of the system. The first generation is created by applying the above rules simultaneously to each cell in the seed, live or dead; births and deaths occur simultaneously, and the discrete moment at which this happens is sometimes called a tick.
Each generation is a pure function of the previous generation. The rules continue to be applied repreatedly to create further generations.


Steps to Follow:

1. Setup the simulation loop
2. Create the grid
3. Tracking of live neighbours
4. Implement the game rules
5. Custom initial state