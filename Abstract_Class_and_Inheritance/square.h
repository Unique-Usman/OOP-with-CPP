#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : public Shape
{
	private:
		int side;
		bool isValid();
	public:
		Square(double side);
		~Square();
		void print();
		double getArea();
		double getPerimeter();
};
#endif
