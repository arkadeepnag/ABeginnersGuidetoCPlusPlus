
#include <iostream>
using namespace std;

// in C++ we can replicate the functionalities of interface using abstract class
class abstractEmployee {
    virtual void askForPromotion() = 0; // this function is now an obligatory function any one 
    //accessing the class has to perform implementation for this function -- pure virtual function

};
class Employee: abstractEmployee {
    // we want to encapsulate Name Company and Age
    protected:
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
// Developer is Derived / Child Class
// Employee is the base class or parent class
// private properties are not accessible in derived classes
// however protected properties are accessible in derived classes

// This inheritence is private by default - to access the properties of base class from the object of developer class
// we have to make the inhertience public
class Developer: public Employee {
    public:
        string favProgrammingLanguage;
        // the base class would take care of the constructor properties it knows
        Developer(string nName, string cCompany, int aAge, string language):Employee(nName, cCompany, aAge) 
        {
            faveProgrammingLanguage = language;
        }

        void fixBug() {
           // When name was private -  cout << getName() << " fixed bug using " << favProgrammingLnaguage;
           // When name is protected
           cout << Name << " fixed bug using " << favProgrammingLnaguage;
        }

};

class Teacher: public Employee {
    public:
        Teacher(string nName, string cCompany, int aAge, string subject):Employee(nName, cCompany, aAge) {
            Subject = subject;
        }
        string Subject;
        void prepareLesson() {
            cout << Name << " preparing lesson for " << Subject;
        }
};

int main() {
    Employee employee1 = Employee("Arkadeep","Neuaurelius",18);
    
    Employee employee2 = Employee("Arkadeep2","Neuaurelius",38);
    Developer d = Developer("Arkadeep","Neuaurelius GmBH",18,"Assembly");
    d.fixBug();

    d.askForPromotion(); // could only be done since inheritance is public

    Teacher t = Teacher("Arkadeep","Neuaurelius GmBH",35,"Computer Science");
    t.prepareLesson();
    t.askForPromotion();
    return 0;
}