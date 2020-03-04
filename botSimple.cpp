#include "bots.h"
#include "stdlib.h"


void cBotSimple::ChooseNextGridPosition()
{
	bool run = false;

	while (!run)
	{
		/*int CurrentX = PositionX();
		int CurrentY = PositionY();
		int playerX = gTarget.PositionX();
		int playerY = gTarget.PositionY();*/
		
		
		if (gTarget.PositionX() > PositionX()) run = SetNext((PositionX() + 1), (PositionY()), gLevel);
		else if (gTarget.PositionX() < PositionX()) run = SetNext((PositionX() - 1), (PositionY()), gLevel);
		else if (gTarget.PositionY() > PositionY()) run = SetNext((PositionX()), (PositionY() + 1), gLevel);
		else if (gTarget.PositionY() < PositionY()) run = SetNext((PositionX()), (PositionY() - 1), gLevel);
		else run = (gTarget.PositionX() == PositionX() || gTarget.PositionY() == PositionY());
		
			
		

		
		//SetNext((PositionX() + 1), (PositionY()), gLevel);
		//SetNext((PositionX() - 1), (PositionY()), gLevel);
		//SetNext((PositionX()), (PositionY() + 1), gLevel);
		//SetNext((PositionX()), (PositionY() - 1), gLevel);
	}
}