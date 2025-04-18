#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Setter methods
    void setName(string n) { name = n; }
    void setAge(int a) { 
        if (a > 0 && a <= 120) { // Simple validation
            age = a; 
        } else {
            cout << "Invalid age!" << endl;
        }
    }
    void setMarks(float m) { 
        if (m >= 0 && m <= 100) { // Simple validation
            marks = m; 
        } else {
            cout << "Invalid marks!" << endl;
        }
    }

    // Getter methods
    string getName() { return name; }
    int getAge() { return age; }
    float getMarks() { return marks; }

    void displayInfo() {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;
    
    student1.setName("John Doe");
    student1.setAge(20);
    student1.setMarks(85.5);
    
    // Try invalid values
    student1.setAge(-5);    // Will show error
    student1.setMarks(150); // Will show error
    
    student1.displayInfo();
    
    return 0;
}