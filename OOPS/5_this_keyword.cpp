#include<iostream>
using namespace std;
class cricket{
public:
    string name;
    int runs;
    int innings;
    cricket(string name, int runs, int innings){
        this->name = name;
        this->runs = runs;
        this->innings = innings;
    }
};
int main(){
    cricket  c1("Virat Kholi",10000,1000);
    cricket  c2("M S Dhoni",8000,700);
    cricket  c3("Gautam Gambhir",8500,900);
    
    cout << "\n" <<endl;
    cout << "Name is : " << c1.name << " ,runs scored is : " << c1.runs << ". NO of matches played : "<< c1.innings << endl;
    cout << "\n" <<endl;
    cout << "Name is : " << c2.name << " ,runs scored is : " << c2.runs << ". NO of matches played : "<< c2.innings << endl;
    cout << "\n" <<endl;
    cout << "Name is : " << c3.name << " ,runs scored is : " << c3.runs << ". NO of matches played : "<< c3.innings << endl;
    cout << "\n" <<endl;
}