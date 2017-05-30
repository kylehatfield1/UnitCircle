#pragma once
#include <string>
#include <map>
using namespace std;

class Quadrant
{
public:
	Quadrant(int quadNumber);
	~Quadrant();

private:
	int quadrantNumber;
	map <int, int> degreePosition;
	map <int, string> radianPosition;
	map <string, string> sinValues;
	map <string, string> cosValues;
	map <string, string> tanValues;

public:
	void setDegreePositions(int quadPosition);
	void setRadianPositions(int quadPosition);
};
