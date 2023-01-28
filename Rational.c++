#include <iostream>

using namespace std;


//Defining a class of rational number
class Rational{
private:
	int num; //numerator
	int denom; //denominator
	int getGcf(); //private function to get highest common factor
	
public:
	void getRat(); //method to initate the rational number
	void getPrinted(); //method to print the rational number
	void getSimplified(); //method to simplified the rational number
	Rational getAdded(Rational r); //method to add rational number to another rational number
};

//the main function
int main(){
	
	Rational r1, r2;
        r1.getRat();
        r2.getRat();
        Rational r3;
        r3 = r1;
        r1.getPrinted();
        r2.getPrinted();
        r3.getPrinted();
        r1.getSimplified();
        r2.getSimplified();
        r3.getSimplified();
        r1.getPrinted();
        r2.getPrinted();
        r3.getPrinted();
        Rational r4 = r3.getAdded(r2);
        r4.getPrinted();
        return 0;
}

//definition of the method above
void Rational::getRat(){
	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";
	cin >> denom;
}
void Rational::getPrinted(){
	cout << num << "/" << denom << endl;
}

int Rational::getGcf(){
	int value = 1;
	for (int i = 2; i <= num; i++){
		if (num % i == 0 && denom % i == 0){
			value = i;
		}
	}
	return value;
}
void Rational::getSimplified(){
	int value = getGcf();
	num = num / value;
	denom = denom / value;
}
Rational Rational::getAdded(Rational r){
	Rational res;
	res.num = (num * r.denom) + (denom * r.num);
	res.denom = denom * r.denom;
	res.getSimplified();
	return res;
}


