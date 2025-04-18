#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    // Getters and setters
    void setName(string n) { name = n; }
    string getName() const { return name; }
    
    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    virtual void makeSound() const {
        cout << "Generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() const {
        cout << getName() << " says: Woof! Woof!" << endl;
    }

    void makeSound() const override {
        bark();
    }
};

int main() {
    // Using base class pointer to derived class object
    Animal* animalPtr = new Dog();
    
    // Set attributes through base class interface
    animalPtr->setName("Buddy");
    animalPtr->setAge(3);
    
    // Access attributes
    cout << "Name: " << animalPtr->getName() << endl;
    cout << "Age: " << animalPtr->getAge() << endl;
    
    // Call derived class method through base pointer
    // animalPtr->bark(); // Error: Animal doesn't have bark()
    
    // Proper way using virtual function
    animalPtr->makeSound(); // Calls Dog's implementation
    
    // Safe downcasting
    if (Dog* dogPtr = dynamic_cast<Dog*>(animalPtr)) {
        dogPtr->bark(); // Now we can call bark()
    }
    
    delete animalPtr;
    return 0;
}