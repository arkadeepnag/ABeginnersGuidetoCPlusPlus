#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

    Student (string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }
    bool hasHonors() {
        if(gpa >= 3.5) {
            return true;
        }
        return false;
    }

};

int main() {
    Student student1("Sheldon","Theoretical Physics",4.5);
    Student student2("Penny","Acting",2.5);
    cout << student1.hasHonors();
    return 0;
}