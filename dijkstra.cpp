#include "bots.h"
#include "stdlib.h"

//the algorithim needs to maintain the following data:
//1. Which nodes (grid locations) are closed
//2. A cost value of each node
//3. Link X and Y coords for each node (shows the best ways to get there)
//4. Which nodes form the final path

void cDijkstra::Build(cBotBase& bot)
{
	for (int i = 0; i < 40;) {
		closed[i][i] = false;
		cost[i][i] = 1000000.0f;
		linkX[i][i] = -1;
		linkY[i][i] = -1;
		inPath[i][i] = false;
		i++;
	}
	bool run = false;
	cost[bot.PositionX()][bot.PositionY()] = 0;
	while (!run) 
	{
		while (!closed) 
		{
			float small = cost[0][0];
			for (int i = 1; i < sizeof(cost) / sizeof(cost[0][0]);i++)
			{
				if (cost[i][i] < small) 
				{
					closed[i][i] = true;
				}

			}

			//Calculate a new cost for the 8 locations neightbouring this one: this will be equal to the cost of the location that was just closed
			//(the parent) + the cost of moving from there ot the neighbour (so, +1 for left,right,up,down, +1.4f for diaganols.
			//Currently on part 3
			
		}

	}

}
