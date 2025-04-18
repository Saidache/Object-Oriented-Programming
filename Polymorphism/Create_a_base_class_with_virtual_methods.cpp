#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* shapes[3];
    
    shapes[0] = new Shape();
    shapes[1] = new Circle();
    shapes[2] = new Rectangle();
    
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw(); // Polymorphic behavior
    }
    
    // Clean up
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }
    
    return 0;
}