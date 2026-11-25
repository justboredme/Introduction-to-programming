#include <iostream>
#include <string>
using namespace std;

class student{
    private:
    string name;
    int age;

    public:
    student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }
    string getName() {
        return name;
        
    }
    int getAge() {
        return age;
    }
    void setAge(int newAge) {
        if (newAge > 0 && newAge < 120) {
            age = newAge;
        }else {
            cout << "Error: Invalid age! Age must be between 1 and 119." << endl;
            // Leave the existing age unchanged.
        }

    }
};

int main(){
    student s1("Alice", 20);
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << endl;

    // We can change the private data using the public setter.
    cout << "\nAttempting to change age to 25..." << endl;
    s1.setAge(25);
    cout << "New Age: " << s1.getAge() << endl;

    cout << "\nAttempting to change age to -5..." << endl;
    s1.setAge(-5);
    cout << "Age after invalid attempt: " << s1.getAge() << endl;

    return 0;
}
