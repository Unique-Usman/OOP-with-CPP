#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

	class Circle : public Shape {
		private:
		       	double radius;	
			bool isValid();
			
		public:
			Circle();
			Circle(double r);
			~Circle();
			void print();
			double getArea();
			double getPerimeter();
	};
#endif 
