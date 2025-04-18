#include <iostream>
#include <memory> // For smart pointers
#include <vector>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}
    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Using unique_ptr (exclusive ownership)
    unique_ptr<Complex> c1 = make_unique<Complex>(3.0, 4.0);
    c1->display();
    
    // unique_ptr can't be copied, only moved
    unique_ptr<Complex> c2 = move(c1);
    if (!c1) {
        cout << "c1 is now empty" << endl;
    }
    
    // Using shared_ptr (shared ownership)
    shared_ptr<Complex> shared1 = make_shared<Complex>(1.0, 2.0);
    {
        shared_ptr<Complex> shared2 = shared1; // Both point to same object
        shared2->display();
        cout << "Use count: " << shared1.use_count() << endl; // 2
    }
    cout << "Use count: " << shared1.use_count() << endl; // 1
    
    // Array of smart pointers
    vector<shared_ptr<Complex>> complexNumbers;
    complexNumbers.push_back(make_shared<Complex>(5.0, 6.0));
    complexNumbers.push_back(make_shared<Complex>(7.0, 8.0));
    
    for (const auto& num : complexNumbers) {
        num->display();
    }
    
    // No need to delete - automatic memory management!
    return 0;
}