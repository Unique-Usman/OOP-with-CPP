#include <iostream>
#include <string>

using namespace std;

const int N=6;

class student {
        static int count;
        int rollno;
        int credits[N];   //this array stores the credit of each course
        int totalCredit;  //this sum the total number of credit taken by student
        string name;      // name of the student
        string courses[N];      //this string stores the name of the course taken
        string grades[N];       // stores the grades in N courses
        float points[N];        //point for each courses
        float gpa;
        void setPoints();    //this is a private function that set the points of each from the course grade
        void setTotalCredit(); //set the total credit
        public:                    // member function declarations
        student();
        void setName(string);
        void setCoursesAndCredit(); //this function set the courses adn the credit array
        void setGrades();       // populates the grades array
        void printGrades();    //this is use to print the grade of the courses taken
        void calculateGPA();    // calculates and stores value  in gpa
        float getGPA();         // yields the GPA
        string getName();       // yields the name
        int getRollno();        // yields the roll no.
};
