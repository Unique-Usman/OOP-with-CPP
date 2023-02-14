#include "wk5_student.h"

void student::setName(string name){
        this->name = name;
}

void student::setCoursesAndCredit(){
        for(int i = 0; i < N; i++){
                cout << "Input the course " << i + 1 << " name " << endl;

                cin >> courses[i];
                cout << "Input the credit for: " << courses[i] << " course" << endl;
                cin >> credits[i];
        }
}
void student::setTotalCredit(){
        this->totalCredit = 0;
        for(int i = 0; i < N; i++){
                this->totalCredit += this->credits[i];
        }
}
void student::setGrades(){
        for(int i = 0; i < N; i++){
                cout << "Enter the grade in the format A+, B+ etc" << endl;
                cout << "Enter the grade for " << courses[i] << " " << endl;
                cin >> grades[i];
        }
}

void student::setPoints(){
        for(int i = 0; i < N; i++){
                if(grades[i] == "A+" || grades[i] == "A"){
                        points[i] = 10;
                }else if(grades[i] == "A-"){
                        points[i] = 9.25;
                }else if(grades[i] == "B+"){
                        points[i] = 8.5;
                }else if(grades[i] == "B"){
                        points[i] = 8.0;
                }else if(grades[i] == "B-"){
                        points[i] = 7.25;
                }else if(grades[i] == "C+"){
                        points[i] = 6.75;
                }else if(grades[i] == "C"){
                        points[i] = 6.0;
                }else if(grades[i] == "C-"){
                        points[i] = 5.25;
                }else if(grades[i] == "D+"){
                        points[i] = 4.75;
                }else if(grades[i] == "D"){
                        points[i] = 4.0;
                }else if(grades[i] == "NC"){
                        points[i] = 0;
                }
        }

}

void student::printGrades(){
        for(int i = 0;  i < N; i++){
                cout << "The grade of " << this->name << " for " << courses[i] << " is " << grades[i] << endl;
        }
}

void student::calculateGPA(){
        this->setTotalCredit();
        this->setPoints();
        float cgpa = 0;
        for (int i = 0; i < N; i++){
                cout << this->points[i];
                cgpa += (this->points[i] * this->credits[i]);
        }
        cgpa = cgpa / totalCredit;
        this->gpa = cgpa;
}

float student::getGPA(){
        cout << "Your GPA is: " << this->gpa << endl;
        return this->gpa;
}

string student::getName(){
        cout << "Name of student is: " <<  this->name << endl;
        return this->name;
}

int student::getRollno(){
        cout << "student Rollno is: u" << this->rollno << endl;
        return this->rollno;
}

student::student(){
        student::count++;
        this->rollno = student::count;
}
