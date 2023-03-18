#include "triangle.h"

Triangle::Triangle(){}

Triangle::Triangle(float a, float b, float c):s1(a),s2(b),s3(c)
{
	if (isValid()){
		cout << "Invalid Triangle\n";
		assert(false);
	}
}

Triangle::~Triangle(){}

bool Triangle::isValid()
{
	return (s1 != 0 && s2 != 0 && s3 != 0 && (s1+s2 < s3) && (s2+s3 < s1) && (s3+s1 < s2));
	//ensuring the sides are equals zero
	//hecking the triangle inequality theorem
}

void Triangle::print()
{
	cout << "The first side of the triangle is: " << s1 << endl;
	cout << "The second side of the triangle is: " <<  s2 << endl;
	cout << "The third side of the triangle is: " << s3 << endl;
}

double Triangle::getPerimeter(){
	return (s1 + s2 + s3);
}

double Triangle::getArea(){
	double s = (s1+s2+s3)/2.0; //s is the semi-perimeter
	return sqrt(s*(s - s1)*(s - s2)*(s - s3));
}

