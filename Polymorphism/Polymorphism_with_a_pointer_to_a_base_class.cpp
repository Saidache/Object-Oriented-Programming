#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "Starting generic vehicle engine" << endl;
    }
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting car engine: Vroom!" << endl;
    }
};

class Truck : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting truck engine: BRRRRRRR!" << endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Truck();
    
    vehicle1->startEngine(); // Calls Car's implementation
    vehicle2->startEngine(); // Calls Truck's implementation
    
    delete vehicle1;
    delete vehicle2;
    
    return 0;
}