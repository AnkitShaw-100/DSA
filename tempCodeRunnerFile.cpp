#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_number;
    float percentage;

    student(string n, int r, float p){
        name = n;
        roll_number = r;
        percentage = p;
    }
};

int main(){
    student s1("Ankit_1",92,78.98);
    student s2("Ankit_2",39,89.54);
    student s3("Ankit_3",23,90.78);
    student s4("Ankit_4",21,54.89);

    cout << s1.name <<", roll number is : " << s1.roll_number << "and have scored : "<< s1.percentage << endl;
    cout << s2.name <<", roll number is : " << s2.roll_number << "and have scored : "<< s2.percentage << endl;
    cout << s3.name <<", roll number is : " << s3.roll_number << "and have scored : "<< s3.percentage << endl;
    cout << s4.name <<", roll number is : " << s4.roll_number << "and have scored : "<< s4.percentage << endl;
    
    return 0;
}