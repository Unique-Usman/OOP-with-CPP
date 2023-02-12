#include <iostream>
#include <cstring>

using namespace std;

class Hen{
        int age;
        float weight;
        string breed;
public:
        Hen(){};
        Hen(int age, float weight, string breed);
        void display();

        class Nest{
                int eggCapacity;
                int numOfEgg;
        public:
        Nest(){};
        Nest(int eggCapacity, int numOfEgg);
        void display();

        class Egg{
                int eggSize;
                string eggColor;
                public:
                Egg(){};
                Egg(int eggSize, string eggColor);
                void display();
        };


};
};

int main(){
        Hen h1(2, 20, "africaHen");
        h1.display();
        Hen::Nest n1(20, 30);
        n1.display();
        Hen::Nest::Egg e1(4, "Black");
        e1.display();
}
//Hen functions and constructors definitions
void Hen::display(){
        cout << "The age of the hen is: " << age << endl;
        cout << "The weight of the he is: " << weight << endl;
        cout << "The breed of the hen is: " << breed << endl;
}
Hen::Hen(int age, float weight, string breed){
        this->age = age;
        this->weight = weight;
        this->breed = breed;
}
Hen::Nest::Nest(int eggCapacity, int numOfEgg){
        this->eggCapacity = eggCapacity;
        this->numOfEgg = numOfEgg;
}
void Hen::Nest::display(){
        cout << "The egg capacity of the nest is:" << eggCapacity << endl;
        cout << "The number of Egg:" << numOfEgg << endl;
}

Hen::Nest::Egg::Egg(int eggSize, string eggColor){
        this->eggSize = eggSize;
        this->eggColor = eggColor;
}
void Hen::Nest::Egg::display(){
        cout << "The egg size: " << eggSize << endl;
        cout << "The egg color is: " << eggColor << endl;
}
