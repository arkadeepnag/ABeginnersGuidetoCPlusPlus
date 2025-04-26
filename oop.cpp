#include <iostream>
using namespace std;
class Book {
    public:
        string title;
        string author;
        int pages;
        // Constructor 
        Book(string aName, string aAuthor , int pPages) {
            // to be called whenever the class is called
            title = aName;
            author = aAuthor;
            pages = pPages;
        }
        
};
int main() {
    Book book1("Harry Potter and the Philosopher's Stone" , "JK Rowling" , 168);
    Book book2("Harry Potter and the Chambers of Secrets" , "JK Rowling" , 192);

    cout << book1.title << endl;
    cout << book2.title << endl;
    
    return 0;
}