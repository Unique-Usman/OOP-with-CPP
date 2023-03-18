#include "circle.h"

Circle::Circle(){}

Circle::Circle(double r):radius(r)
{
	if (!isValid()){
		cout << "Invalid Circle\n";
		assert(false);
	}
}

Circle::~Circle(){}

void Circle::print()
{
	cout << "The radius of the circle is " << radius << endl;
}

double Circle::getArea()
{	
	return (M_PI * radius * radius);
}

double Circle::getPerimeter()
{
	return (2 * M_PI * radius);
}

bool Circle::isValid()
{	
	return (radius > 0.0); 
}
