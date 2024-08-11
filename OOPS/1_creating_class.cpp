#include <iostream>
using namespace std;

class student{ // declaring a class
    public: // access specifier
    string name; // data member
    int roll_no; 
    float marks;  
};  // end of class(needs a semicolon)

int main() {
   student s1; // creating an object of class student
    s1.name = "John"; // accessing data members
    s1.roll_no = 2;
    s1.marks = 98.5;
    cout << "Name : " << s1.name << endl;
    cout << "Roll no : " << s1.roll_no << endl;
    cout << "Marks : " << s1.marks << endl;
    cout << "***************";
    cout << "\n";

    student s2; // creating another object of class student
    s2.name = "Doe"; // accessing data members
    s2.roll_no = 3;
    s2.marks = 97.5;
    cout << "Name : " << s2.name << endl;
    cout << "Roll no : " << s2.roll_no << endl;
    cout << "Marks : " << s2.marks << endl;
    cout << "***************";
    cout << "\n";

    student s3; // creating another object of class student
    s3.name = "Jane"; // accessing data members
    s3.roll_no = 4;
    s3.marks = 96.5;
    cout << "Name : " << s3.name << endl;
    cout << "Roll no : " << s3.roll_no << endl;
    cout << "Marks : " << s3.marks << endl;
    cout << "***************";    
    return 0;
    
}