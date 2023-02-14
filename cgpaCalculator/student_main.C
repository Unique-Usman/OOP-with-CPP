#include "student_impl.C"

int student::count = 0;

int main(){
        int numOfs; //number of student
        cout << "How many student do you want to find their GPA: ?" << endl;
        cin >> numOfs;
        student *ptr[numOfs];
        cout << "Note the program will ask start asking for details for each student " << endl;
        for(int i = 0; i < numOfs; i++){
                cout << endl << " ------------FOR STUDENT-------- " << i + 1 << endl;
                ptr[i] = new student;
                string n; //n is variable to initialize the name of the student;
                cout << "What is the name of student " << i + 1 << endl;
                cin >> n;
                ptr[i]->setName(n);
                ptr[i]->setCoursesAndCredit();
                ptr[i]->setGrades();
                ptr[i]->calculateGPA();
                ptr[i]->getName();
                ptr[i]->getRollno();
                ptr[i]->printGrades();
                ptr[i]->getGPA();

        }

        //deleting the student Object
        for(int i = 0; i < numOfs; i++){
                delete ptr[i];
        }
        /*
        student s1;
        s1.setName("Usman");
        s1.setCoursesAndCredit();
        s1.setGrades();
        s1.calculateGPA();
        s1.getName();
        s1.getRollno();
        s1.printGrades();
        s1.getGPA();    */
}
