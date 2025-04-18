#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int yearPublished;

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year Published: " << yearPublished << endl;
    }
};

int main() {
    Book myBook;
    myBook.title = "The Great Gatsby";
    myBook.author = "F. Scott Fitzgerald";
    myBook.yearPublished = 1925;
    
    myBook.displayInfo();
    return 0;
}