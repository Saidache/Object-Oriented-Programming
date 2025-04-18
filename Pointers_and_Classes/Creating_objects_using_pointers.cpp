#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Dynamically allocate a Car object
    Car* carPtr = new Car;
    
    // Access members using pointer
    carPtr->brand = "Toyota";
    carPtr->year = 2020;
    
    // Call member function
    carPtr->displayInfo();
    
    // Don't forget to free memory
    delete carPtr;
    
    return 0;
}