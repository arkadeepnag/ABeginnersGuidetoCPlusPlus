// This is a 1D array program
#include <iostream>

using namespace std;

int main() {
    int* arr = new int[10]; 

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 
}