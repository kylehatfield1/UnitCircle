#include "Quadrant.h"



Quadrant::Quadrant(int quadNumber)
{
	quadrantNumber = quadNumber;
	for (int quadPosition = 1; quadPosition <= 4; quadPosition++)
	{
		setDegreePositions(quadPosition);
	}
}


Quadrant::~Quadrant()
{
}

void Quadrant::setRadianPositions(int quadPosition)
{
	switch (quadrantNumber)
	{
	case 1:
		radianPosition[quadPosition] = to_string(42);
	default:
		break;
	}	
}


void Quadrant::setDegreePositions(int quadPosition)
{
	int degreeBase;
	if (quadPosition == 1 || 2)
	{
		degreeBase = (quadPosition - 1) * 30;
	}
	else
	{

	}

	degreePosition[quadPosition] = ((quadrantNumber - 1) * 90) + degreeBase;
}
