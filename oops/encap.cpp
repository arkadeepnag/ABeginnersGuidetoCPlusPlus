
#include <iostream>
using namespace std;

class Employee {
    // we want to encapsulate Name Company and Age
    private:
        string Name;
        string Company;
        int Age;

    public:
        //setter
        void setName(string name) {
            Name = name;
        }
        //getter
        string getName() {
            return Name;
        }
        //setter
        void setCompany(string company) {
            Company = company;
        }
        //getter
        string getCompany() {
            return Company;
        }
        //setter
        void setAge(int age) {
            if(age >= 18)
            Age = age;
        }
        //getter
        int getAge() {
            return Age;
        }
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

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << endl;
    return 0;
}