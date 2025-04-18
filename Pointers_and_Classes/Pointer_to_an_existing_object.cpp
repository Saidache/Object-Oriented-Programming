#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

// Function that takes a pointer to Book
void printBookInfo(Book* bookPtr) {
    cout << "\nBook Information (via pointer):" << endl;
    bookPtr->displayInfo();
}

int main() {
    Book myBook;
    myBook.title = "1984";
    myBook.author = "George Orwell";
    myBook.year = 1949;
    
    // Create pointer to existing object
    Book* bookPtr = &myBook;
    
    // Modify object through pointer
    bookPtr->year = 1950;
    
    // Access and display
    bookPtr->displayInfo();
    
    // Pass pointer to function
    printBookInfo(bookPtr);
    
    return 0;
}