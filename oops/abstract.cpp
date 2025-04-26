
#include <iostream>
using namespace std;

// in C++ we can replicate the functionalities of interface using abstract class
class abstractEmployee {
    virtual void askForPromotion() = 0; // this function is now an obligatory function any one 
    //accessing the class has to perform implementation for this function -- pure virtual function

};
class Employee: abstractEmployee {
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
        // implementation of void askForPromotion() , without this there would be errors
        void askForPromotion() {
            if(Age > 30) {
                cout << Name << " got promoted";
            }
            else {
                cout << Name << " , sorry no promotion";
            }
        }

    };
int main() {
    Employee employee1 = Employee("Arkadeep","Neuaurelius",18);
    
    Employee employee2 = Employee("Arkadeep2","Neuaurelius",38);

    employee1.askForPromotion();
    employee2.askForPromotion();
    return 0;
}