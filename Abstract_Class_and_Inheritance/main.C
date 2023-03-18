#include "square.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

int main()
{       
        cout << "What shape do you want to work with?" << endl;
        cout << "1. Square\n2. Rectangle\n3. Circle\n4. Triangle" << endl;
        int choice;
        cout << "Enter 1/2/3/4/(0 to quit) ";
        cin >> choice;
        if (choice == 0) return 0;
        if (choice == 1)
        {       
                double side;
                cout << "Enter the side of square: ";
                cin >> side;
                Square sq(side);
                sq.print();     // information about the dimension
                cout << "Area = " << sq.getArea() << endl;
                cout << "Perimeter = " << sq.getPerimeter() << endl;
        } 

       if(choice == 2)
       {
       	        double breadth, height;
		cout << "Enter the breadth of the rectangle: ";
		cin >> breadth;
		cout << "Enter the height of the rectangle: ";
		cin >> height;
		Rectangle rct(breadth, height);
		rct.print();
                cout << "Area = " << rct.getArea() << endl;
                cout << "Perimeter = " << rct.getPerimeter() << endl; 
       }	

       if(choice == 3)
       {
       		double radius;
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		Circle c(radius);	
		c.print();
		cout << "Area = " << c.getArea() << endl;
		cout << "Perimeter = " << c.getPerimeter() << endl;
       }

       if(choice == 4)
       {
       		double s1,s2,s3;
		cout << "Enter the value of the first side of the triangle: " << endl;
		cin >> s1;
		cout << "Enter the value of the second side of the triangle: " << endl;
		cin >> s2;
		cout << "Enter the value of the third side of the triangle: " << endl;
		cin >> s3;
		Triangle tr(s1,s2,s3);	
		tr.print();
		cout << "Area = " << tr.getArea() << endl;
		cout << "Perimeter = " << tr.getPerimeter() << endl;
       }
        return 0;
}

