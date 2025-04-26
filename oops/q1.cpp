#include <iostream>
using namespace std;

class Employee {
    // public : accessible outside of class
    // private : cannot be accessible outside of class (by default)
    // protected : 
    public:
        string Name;
        string Company;
        int Age;

        void introduceEmployee() {
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }
};
int main() {
    Employee employee1;
    employee1.Name = "Arkadeep Nag";
    employee1.Company = "Neuaurelius GmBH";
    employee1.Age = 18;

    employee1.introduceEmployee();

    Employee employee2;
    employee2.Name = "John";
    employee2.Company = "Amazon Inc";
    employee2.Age = 35;

    employee2.introduceEmployee();
    return 0;
}