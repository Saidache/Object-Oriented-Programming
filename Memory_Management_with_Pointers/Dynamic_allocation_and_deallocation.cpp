#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Dynamically allocate Person object
    Person* personPtr = new Person{"Alice", 30};
    
    cout << "Before deletion:" << endl;
    personPtr->displayInfo();
    
    // Deallocate memory
    delete personPtr;
    
    // After deletion (DANGEROUS - just for demonstration)
    cout << "\nAfter deletion:" << endl;
    // personPtr->displayInfo(); // This would cause undefined behavior
    
    // Good practice: set pointer to nullptr after deletion
    personPtr = nullptr;
    
    return 0;
}