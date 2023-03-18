#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle{
	float s1, s2, s3;
	bool isValid();
public:
	Triangle();
	Triangle(float a, float b, float c);
	~Triangle();
	void print();
	double getPerimeter();
	double getArea();
};

#endif
