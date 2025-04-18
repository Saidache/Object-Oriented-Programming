#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int id;

    Student(string n, int i) : name(n), id(i) {
        cout << "Student created: " << name << endl;
    }

    ~Student() {
        cout << "Student destroyed: " << name << endl;
    }
};

void createStudentsWithLeak() {
    // This will cause memory leaks as we don't delete the objects
    Student* s1 = new Student("Alice", 1001);
    Student* s2 = new Student("Bob", 1002);
    // No delete statements - MEMORY LEAK!
}

void createStudentsProperly() {
    vector<Student*> students;
    
    students.push_back(new Student("Charlie", 1003));
    students.push_back(new Student("Diana", 1004));
    
    // Proper cleanup
    for (auto student : students) {
        delete student;
    }
}

int main() {
    cout << "Creating students with memory leak:" << endl;
    createStudentsWithLeak(); // Memory leaks here
    
    cout << "\nCreating students with proper cleanup:" << endl;
    createStudentsProperly(); // No leaks here
    
    // Better approach: use smart pointers or stack allocation
    cout << "\nUsing stack allocation (no pointers needed):" << endl;
    Student s5("Eve", 1005); // Automatically destroyed when out of scope
    
    return 0;
}