This directory contains my solution to lab7, the main aim is to code and design an abstract class called SHAPE with multiple child class which are Triangle, Circle, Square, Rectangle. 

This directory contains multiple files, the header files for each of the shapes and the SHAPE abstract class. It also contains the implementation file for the declaration. Another thing is that it contains the main/driver file. 

The aim of the lab is to learn how abstract class, multiple inheritance, pure functions and how to wwork with multiple files. 

The below code gives an overview of what each shapes have in common.

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

Happy coding
