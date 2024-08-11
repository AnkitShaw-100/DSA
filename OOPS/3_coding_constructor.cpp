// Constructor 
#include<iostream>
using namespace std;

class Coding{
    public:
    string name;
    string language;
    int years; 

    Coding(string s, string l, int y){
    name = s;
    language =  l;
    years = y;
    }
};

int main(){
    Coding c1("Ankit", "C++", 2);
    Coding c2("John", "C", 3);
    Coding c3("Dhruv", "Ruby", 1);
    Coding c4("Raghav", "RustGo", 7);

    cout << "Name is: " << c1.name << ", language is: " << c1.language << ", coding for " << c1.years << " years." << endl;
    cout << "Name is: " << c2.name << ", language is: " << c2.language << ", coding for " << c2.years << " years." << endl;
    cout << "Name is: " << c3.name << ", language is: " << c3.language << ", coding for " << c3.years << " years." << endl;
    cout << "Name is: " << c4.name << ", language is: " << c4.language << ", coding for " << c4.years << " years." << endl;

    return 0;
}