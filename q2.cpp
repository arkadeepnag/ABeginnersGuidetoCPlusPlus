#include <iostream>
using namespace std;

int main() {
    // All Datatypes
    char grade = 'A';
    string phrase = "Arkadeep Nag";
    int age = 18;
    double gpa = 2.6;
    bool isMale = true;
    // Working with strings
    phrase = "Arkadeep Nag \n says Hello";
    cout<< phrase;
    cout << phrase.length(); //returns length of the string
    cout << phrase[0]; //prints a specific character from the string 
    cout << phrase.find("Arkadeep" , 0); // Find occurance of the word "Arkadeep in the string " , syntax -> find(str to find, which should be considered the starting position)
    string phrasesub phrase.substr(4,8); // Substring from index position 4 and take 8 characters from 4
    
    return 0;
}