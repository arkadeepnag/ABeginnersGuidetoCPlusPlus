#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age";
    cin >> age;
    cout << "Your age is" << age << "years old";

    // String Input
    string name;
    cout << "Enter your name" ;
    getline(cin, name);
    cout << "hello " << name;
    return 0;
}