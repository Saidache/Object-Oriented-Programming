#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Setter methods
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setYear(int y) { year = y; }

    // Getter methods
    string getBrand() { return brand; }
    string getModel() { return model; }
    int getYear() { return year; }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    
    myCar.setBrand("Tesla");
    myCar.setModel("Model S");
    myCar.setYear(2022);
    
    cout << "Car Information:" << endl;
    cout << "Brand: " << myCar.getBrand() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;
    
    cout << "\nDisplay using member function:" << endl;
    myCar.displayInfo();
    
    return 0;
}