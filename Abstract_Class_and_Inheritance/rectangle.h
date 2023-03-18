#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
	private:
		double height;
		double breadth;
		bool isValid();
	public:
		Rectangle();
		Rectangle(double h, double b);
		~Rectangle();
		void print();
		double getArea();
		double getPerimeter();
};
#endif
