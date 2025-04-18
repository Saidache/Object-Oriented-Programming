#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    // Constructor with all parameters
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Car object created with year: " << brand << " " << model << " " << year << endl;
    }

    // Constructor without year parameter (defaults to 0)
    Car(string b, string m) {
        brand = b;
        model = m;
        year = 0;
        cout << "Car object created without year: " << brand << " " << model << endl;
    }

    ~Car() {
        cout << "Car object destroyed: " << brand << " " << model << endl;
    }
};

int main() {
    Car car1("Honda", "Civic", 2018);
    Car car2("Ford", "Mustang");
    return 0;
}