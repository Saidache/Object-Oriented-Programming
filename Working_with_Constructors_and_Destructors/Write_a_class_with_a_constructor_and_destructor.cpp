#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Car object created: " << brand << " " << model << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed: " << brand << " " << model << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);
    return 0;
}