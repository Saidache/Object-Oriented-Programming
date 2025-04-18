#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    double salary;

public:
    Employee(int i, double s) : id(i), salary(s) {
        cout << "Employee " << id << " created" << endl;
    }

    virtual ~Employee() {
        cout << "Employee " << id << " destroyed" << endl;
    }

    virtual void displayInfo() const {
        cout << "Employee ID: " << id << ", Salary: $" << salary << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(int i, double s, int t) : Employee(i, s), teamSize(t) {
        cout << "Manager " << id << " created" << endl;
    }

    ~Manager() override {
        cout << "Manager " << id << " destroyed" << endl;
    }

    void displayInfo() const override {
        Employee::displayInfo();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    // Dynamically allocate objects
    Employee* emp1 = new Employee(1001, 50000.0);
    Employee* emp2 = new Manager(2001, 80000.0, 5);
    
    // Use the objects
    emp1->displayInfo();
    emp2->displayInfo();
    
    // Proper cleanup
    delete emp1;
    delete emp2;
    
    return 0;
}