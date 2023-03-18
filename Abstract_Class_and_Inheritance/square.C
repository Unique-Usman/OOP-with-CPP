#include "square.h"

Square::Square (double s) : side (s)
{
	if (!isValid())
	{
		cout << "Invalid square!\n";
		assert(false);
	}
}

Square::~Square()
{
}

void Square::print()
{
	cout << "Square of side : " << side << endl;
}

double Square::getArea()
{
	return (side * side);
}

double Square::getPerimeter()
{
	return (4*side);
}

bool Square::isValid()
{
	return (side > 0.0);
}
