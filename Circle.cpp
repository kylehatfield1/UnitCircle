#include <iostream>
#include "Circle.h"
#include "Quadrant.h"
using namespace std;


Circle::Circle()
{
	Quadrant q1(1), q2(2), q3(3), q4(4);
}


Circle::~Circle()
{
}

void Circle::Print()
{
	cout << "Inside Circle Class Print()" << endl;
}