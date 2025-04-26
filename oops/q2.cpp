#include <iostream>
using namespace std;

class Employee {
    // default constructor - in case we donot create a constructor of our own 
    // - our compiler is going to generate that automatically
    public:
        string Name;
        string Company;
        int Age;

        void introduceEmployee() {
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }
        Employee(string nName, string cCompany, int aAge) {
            Name = nName;
            Company = cCompany;
            Age = aAge;
        }
};
int main() {
    Employee employee1 = Employee("Arkadeep","Neuaurelius",18);
    employee1.introduceEmployee();
    return 0;
}