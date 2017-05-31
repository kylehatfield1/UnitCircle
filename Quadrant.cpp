#include "Quadrant.h"
#include <iostream>




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

void Quadrant::setDegreePositions(int quadPosition)
{
	int degreeBase;
	if (quadPosition == 1 || quadPosition == 2)
	{
		degreeBase = (quadPosition - 1) * 30;
	}
	else
	{
		degreeBase = ((quadPosition - 2) * 15) + 30;
	}

	degreePosition[quadPosition] = ((quadrantNumber - 1) * 90) + degreeBase;

	cout << "Quadrant: " << quadrantNumber << endl << "QuadPosition: " << quadPosition << endl << "Degree Value set to: " << degreePosition[quadPosition] << endl;
}

void Quadrant::setRadianPositions(int quadPosition)
{	
	int degree = degreePosition[quadPosition];
	if (degree == 0)
	{
		radianPosition[quadPosition] = "0";
		return;
	}

	string numerator;
	string denominator;
	switch (quadrantNumber)
	{
	case 1:
		numerator = "pi";
		denominator = "/" + to_string(180 / degree);
		break;
	case 2:
		if (quadPosition == 1)
		{
			denominator = "/2";
		}
		else
		{
			
		}

	}
}


