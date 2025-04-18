#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
    int age;

public:
    // Constructor
    Person(const char* n, int a) : age(a) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    
    // Destructor
    ~Person() {
        delete[] name;
    }
    
    // Copy constructor
    Person(const Person& other) : age(other.age) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        cout << "Copy constructor called" << endl;
    }
    
    // Assignment operator
    Person& operator=(const Person& other) {
        if (this != &other) { // Protect against self-assignment
            delete[] name; // Free existing memory
            
            age = other.age;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
            cout << "Assignment operator called" << endl;
        }
        return *this;
    }
    
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Alice", 25);
    Person p2("Bob", 30);
    
    // Test copy constructor
    Person p3 = p1;
    p3.display();
    
    // Test assignment operator
    p3 = p2;
    p3.display();
    
    return 0;
}