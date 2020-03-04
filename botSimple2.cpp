#include "bots.h"
#include "stdlib.h"


void cBotSimple2::ChooseNextGridPosition()
{
	bool run = false;
	

	while (!run)
	{
		
		if (gTarget.PositionX() > PositionX()) 
		{

			if (gLevel.isValid(PositionX() + 1, PositionY())) 
			{
				run = SetNext((PositionX() + 1), (PositionY()), gLevel);
			}
			
			if (gLevel.isValid(PositionX(), PositionY() -1 ))
			{
				run = SetNext((PositionX()), (PositionY() -1 ), gLevel);
			}
			else 
			{
				run = SetNext((PositionX()), (PositionY() + 1), gLevel);
			}
			
		}
		else if (gTarget.PositionX() < PositionX())//this is never called - likely needs to use the global variables of current direction in bots.h
		{
			if (gLevel.isValid(PositionX() - 1, PositionY())) 
			{
				run = SetNext((PositionX() - 1), (PositionY()), gLevel);
			}
			else
			{
				run = SetNext((PositionX()), (PositionY() - 1), gLevel);
			}
		}
		else if (gTarget.PositionY() > PositionY())
		{
			if (gLevel.isValid(PositionX(), PositionY() + 1)) 
			{
				run = SetNext((PositionX()), (PositionY() + 1), gLevel);
			}
			else 
			{
				run = SetNext((PositionX() - 1), (PositionY()), gLevel);
			}
		
		}

		else if (gTarget.PositionY() < PositionY())
		{
			if (gLevel.isValid(PositionX(), PositionY() - 1))
			{
				run = SetNext((PositionX()), (PositionY() - 1), gLevel);
			}
			else 
			{
				run = SetNext((PositionX() + 1), (PositionY()), gLevel);
			}
		}
	
		
		else run = (gTarget.PositionX() == PositionX() || gTarget.PositionY() == PositionY());
	}
}