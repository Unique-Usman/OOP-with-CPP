#include "rectangle.h"

Rectangle::Rectangle(){}

Rectangle::Rectangle (double h, double b) : height (h), breadth(b)
{
	if (!isValid())
	{
		cout << "Invalid square!\n";
		assert(false);
	}
}

Rectangle::~Rectangle()
{
}

void Rectangle::print()
{
	cout << "Rectangle of breadth : " << breadth << endl;
	cout << "Rectangle of heigth: " << height << endl;
}

double Rectangle::getArea()
{
	return (breadth * height);
}

double Rectangle::getPerimeter()
{
	return 2*(breadth + height);
}

bool Rectangle::isValid()
{
	return (breadth > 0.0 && height > 0.0);
}

