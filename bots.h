#pragma once
//======================================================================================
//Header file for bots: initially cBotRandom is defined here, but other bot classes
//can go here too
//
//(c) Patrick Dickinson, University of Lincoln, School of Computer Science, 2020
//======================================================================================

#include "botbase.h"

class cBotRandom : public cBotBase
{
	virtual void ChooseNextGridPosition();
};
class cBotSimple : public cBotBase
{
	virtual void ChooseNextGridPosition();
};
class cBotSimple2 : public cBotBase
{
	virtual void ChooseNextGridPosition();
};
class cBotSimple3 : public cBotBase
{
	virtual void ChooseNextGridPosition();
	int CurrentDirectionX;
	int CurrentDirectionY;;
};
class cDijkstra : public cBotBase
{
	virtual void ChooseNextGridPosition();
	bool closed[GRIDWIDTH][GRIDHEIGHT]; //whether or not location is closed
	float cost[GRIDWIDTH][GRIDHEIGHT]; //cost value for each location
	int linkX[GRIDWIDTH][GRIDHEIGHT]; //link X coord for each location
	int linkY[GRIDWIDTH][GRIDHEIGHT];; //link Y coord for each location
	bool inPath[GRIDWIDTH][GRIDHEIGHT];	//whether or not a loction is in the final path

	bool completed;
	cDijkstra() {
		completed = false;
	}

	virtual void Build(cBotBase& bot);

};


