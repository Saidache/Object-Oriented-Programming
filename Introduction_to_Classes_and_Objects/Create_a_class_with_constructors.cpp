#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int yearPublished;

    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        yearPublished = 0;
    }

    // Parameterized constructor
    Book(string t, string a, int y) {
        title = t;
        author = a;
        yearPublished = y;
    }

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year Published: " << yearPublished << endl;
    }
};

int main() {
    Book defaultBook; // Uses default constructor
    Book paramBook("1984", "George Orwell", 1949); // Uses parameterized constructor
    
    cout << "Default Book:" << endl;
    defaultBook.displayInfo();
    
    cout << "\nParameterized Book:" << endl;
    paramBook.displayInfo();
    
    return 0;
}