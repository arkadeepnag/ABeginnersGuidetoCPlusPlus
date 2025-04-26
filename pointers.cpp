#include <iostream>
using namespace std;

int main() {
    //pointer - the memory address where the variable is stored
    int age = 9;
    cout << &age;// shows the memory address of age
    int *pAge = &age;// a pointer variable starts with *
    cout << pAge; // this shows the pointer variable / the memory address
    cout << "\n" << *pAge; // this shows the value which here = 9
    return 0;
}