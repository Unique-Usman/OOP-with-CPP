#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shape {
	protected:
		virtual bool isValid () = 0;
	public:
		virtual void print() = 0;
		virtual double getArea() = 0;
		virtual double getPerimeter() = 0;
};
#endif
