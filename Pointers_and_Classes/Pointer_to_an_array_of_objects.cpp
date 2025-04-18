#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    // Create array of pointers to Car objects
    Car* carArray[3];
    
    // Dynamically allocate Car objects
    carArray[0] = new Car{"Toyota", 2020};
    carArray[1] = new Car{"Honda", 2019};
    carArray[2] = new Car{"Ford", 2021};
    
    // Access and display cars
    for (int i = 0; i < 3; i++) {
        carArray[i]->displayInfo();
    }
    
    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        delete carArray[i];
    }
    
    return 0;
}