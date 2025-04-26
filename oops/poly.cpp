
#include <iostream>
using namespace std;

class abstractEmployee {
    virtual void askForPromotion() = 0;


};
class Employee: abstractEmployee {

    protected:
        string Name;
        string Company;
        int Age;

    public:
    
        void setName(string name) {
            Name = name;
        }
    
        string getName() {
            return Name;
        }
    
        void setCompany(string company) {
            Company = company;
        }
    
        string getCompany() {
            return Company;
        }
    
        void setAge(int age) {
            if(age >= 18)
            Age = age;
        }
    
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
    
        void askForPromotion() {
            if(Age > 30) {
                cout << Name << " got promoted";
            }
            else {
                cout << Name << " , sorry no promotion";
            }
        }
        // Making it virtual - so that it could easily be overriden in the base classes
        virtual void Work() {
            cout << Name << " is checking email, task backlog, performing those tasks ....." << endl;

        }

};

class Developer: public Employee {
    public:
        string favProgrammingLanguage;
    
        Developer(string nName, string cCompany, int aAge, string language):Employee(nName, cCompany, aAge) 
        {
            favProgrammingLanguage = language;
        }

        void fixBug() {
        
        
           cout << Name << " fixed bug using " << favProgrammingLanguage;
        }
        void Work() {
            cout << Name << " is coding" << endl;

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
        void Work() {
            cout << Name << " is teaching" << endl;

        }
};

// The most common use of polymorphism is when a parent class reference 
// is used to refer to a child object

int main() {
    Employee employee1 = Employee("Arkadeep","Neuaurelius",18);
    Developer d = Developer("Arkadeep","Neuaurelius GmBH",18,"Assembly");
    Teacher t = Teacher("Arkadeep","Neuaurelius GmBH",35,"Computer Science");

    // Same as below
    // d.Work();
    // t.Work();

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work(); // "->" is used when we want to access memebers of a pointer
    e2->Work(); 
    return 0;
}