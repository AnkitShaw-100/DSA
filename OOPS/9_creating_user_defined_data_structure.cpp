// User defined data structure 
// Creating our own vector

#include<iostream>
using namespace std;

class myvector{
    
    public:
    int size;
    int capacity;
    int* arr;

    myvector(){
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }

    ~myvector() {
        delete[] arr;
    }

    void add(int ele){
        if(size==capacity){
            capacity *=2;
            int* arr2 = new int[capacity];
            for(int i = 0; i<size; i++){
                arr2[i] = arr[i];
            }
            delete[] arr;
            arr = arr2;
        }
        arr[size++] = ele;
    }
    
    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
        if(size==0){
            cout<<"Array is empty"<<endl;
            return -1;
        }
        if(idx >= size){
            cout <<"Inavlid index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void remove(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        for (int i = idx; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
};
int main(){
    myvector v;
    v.add(10);
    v.add(20);
    v.add(30);
    v.add(40);
    v.add(50);
    v.print();
    v.remove(2);
    v.print();
    cout << v.get(3)<<endl;
    v.print();
    return 0;
}