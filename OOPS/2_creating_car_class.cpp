#include<iostream>
using namespace std;

class car{
    public:
    string name;
    int car_no;
    int seats;
};

int main(){
    car c1;
    c1.name = "Honda";
    c1.car_no = 35;
    c1.seats = 4;
    cout << "Car name is : " << c1.name << endl;
    cout << "Car number is : " << c1.car_no << endl;
    cout << "Car seats is : " << c1.seats << endl;
    cout << "****************" << endl;
    cout << "\n";

    car c2;
    c2.name = "Scorpio";
    c2.car_no = 10 ;
    c2.seats = 8;
    cout << "Car name is : " << c2.name << endl;
    cout << "Car number is : " << c2.car_no << endl;
    cout << "Car seats is : " << c2.seats << endl;
    cout << "****************" << endl;
    cout << "\n";

    car c3;
    c3.name = "Thar";
    c3.car_no = 45;
    c3.seats = 4;
    cout << "Car name is : " << c3.name << endl;
    cout << "Car number is : " << c3.car_no << endl;
    cout << "Car seats is : " << c3.seats << endl;
    cout << "****************" << endl;
    cout << "\n";

    return 0;
}