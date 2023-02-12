#include <iostream>
#include <cassert>
#include <cmath>


using namespace std;

class Triangle{
        float s1, s2, s3;

public:
        Triangle(){}
        Triangle(float,float,float);
        void setSides();
        bool isRightTriangle();
        inline float getPerimeter();
        float getArea();
};


int main(){

        Triangle tr1(6.75, 9.0, 11.25), tr2;

        //I did not call setSides function on tr1 since it has been initialized by one of the constructors

        if (tr1.isRightTriangle()){
                cout << "Tr1 is a right angle triangle" << endl;
        }else{
                cout << "Tr1 is not a right angle" << endl;
        };
        cout << "The perimeter of the Tr1 is: " <<  tr1.getPerimeter() << endl;
        cout << "The area of the Tr1 is :" << tr1.getArea() << endl;

        tr2.setSides();
        if (tr2.isRightTriangle()){
                cout << "Tr2 is a right angle triangle" << endl;
        }else{
                cout << "Tr2 is not a right angle" << endl;
        };
        cout << "The perimeter of the Tr2 is: " <<  tr2.getPerimeter() << endl;
        cout << "The area of the Tr2 is :" << tr2.getArea() << endl;

}


Triangle::Triangle(float a, float b, float c)
{
        assert(a != 0 && b != 0 && c != 0); //ensuring the sides are equals zero
        bool result = (a+b > c) && (b+c > a) && (c+a > b); //checking the triangle inequality theorem 
        assert(result == true); //will raise error it the triangle inequality theorem is violated
        s1 = a; s2 = b; s3 = c;
}

//1j setSides function


void Triangle::setSides(){
        float a, b, c;
        cout << "Enter the value of the first side of the triangle: " << endl;
        cin >> a;
        cout << "Enter the value of the second side of the triangle: " << endl;
        cin >> b;
        cout << "Enter the value of the third side of the triangle: " << endl;
        cin >> c;
        assert(a != 0 && b != 0 && c != 0); //ensuring the sides are equals zero
        bool result = (a+b > c) && (b+c > a) && (c+a > b); //checking the triangle inequality theorem 
        assert(result == true); //will raise error it the triangle inequality theorem is violated
        s1 = a; s2 = b; s3 = c;
}

//1k 
bool Triangle::isRightTriangle(){
        if (sqrt(pow(s1,2)+ pow(s2, 2)) == s3 || sqrt(pow(s1,2)+ pow(s3, 2)) == s2 || sqrt(pow(s2,2)+ pow(s3, 2)) == s1){
                return 1;
        }else{
                return 0;
        }
}

inline float Triangle::getPerimeter(){
        return (s1 + s2 + s3);
}

float Triangle::getArea(){
        float s = (s1+s2+s3)/2.0; //s is the semi-perimeter
        return sqrt(s*(s - s1)*(s - s2)*(s - s3));
}
  
