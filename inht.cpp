#include <iostream>

using namespace std;

// Super class
class Chef {
    public:
        void makeChicken() {
            cout << "The Chef makes Chicken" << endl;
        }
        void makeSalad() {
            cout << "The Chef makes Salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The Chef makes bbq ribs" <<endl;
        }
};

// Dervied Class

//Inherit the functionalities of chef
class ItalianChef : public Chef {
    public:
        void makePasta() {
            cout << "The Chef makes Pasta" << endl;
        }
        // Over writing
        void makeSpecialDish() {
            cout << "The Chef makes itanlian bbq ribs" <<endl;
        }
};
int main() {
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();
    return 0;
}