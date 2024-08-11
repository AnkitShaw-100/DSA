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

    void print(){
        cout << name << " "<< runs <<" "<< innings << endl;
    }
};
int main(){
    cricket  c1("Virat Kholi",10000,1000);
    cricket  c2("M S Dhoni",8000,700);
    cricket  c3("Gautam Gambhir",8500,900);

    c1.print();
    c2.print();
    c3.print();
}