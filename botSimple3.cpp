#include "bots.h"
#include "stdlib.h"


void cBotSimple3::ChooseNextGridPosition()
{
	bool run = false;
	CurrentDirectionX = PositionX();
	CurrentDirectionY = PositionY();

	while (!run)
	{
		

		if (gLevel.isValid(CurrentDirectionX+1, CurrentDirectionY)) 
		{
			CurrentDirectionX = PositionX() + 1;
			CurrentDirectionY = PositionY();
			run = SetNext((CurrentDirectionX), (CurrentDirectionY), gLevel);
		}
		else if (gLevel.isValid(CurrentDirectionX,CurrentDirectionY+1)) 
		{
			CurrentDirectionX = PositionX();
			CurrentDirectionY = PositionY()+1;
			run = SetNext((CurrentDirectionX), (CurrentDirectionY), gLevel);
		}
		else if (gLevel.isValid(CurrentDirectionX-1, CurrentDirectionY))
		{
			CurrentDirectionX = PositionX() - 1;
			CurrentDirectionY = PositionY();
			run = SetNext((CurrentDirectionX), (CurrentDirectionY), gLevel);
		}
		else  
		{
			CurrentDirectionX = PositionX();
			CurrentDirectionY = PositionY() - 1;
			run = SetNext((CurrentDirectionX), (CurrentDirectionY), gLevel);
		}
		
	}
}