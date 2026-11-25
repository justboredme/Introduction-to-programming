#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string model;

    //Constructor
    Car(string m) {
        model = m;
        cout << " Car created: " << model << endl;

    }
    //Destructor
    ~Car () {
        cout << "Car destroyed: " << model << endl;

    }
};

int main() {
    cout << " ---Creating stack object ---" << endl;
    // STACK ALLOCATION: Memory is managed automatically.
    //Note: No 'new' keyword.
    Car stackCar = Car ("Toyota");

    cout << "\n---Creating Heap Object---" << endl;
    // HEAP ALLOCATION: Memory is managed manually using 'new'.
    Car*heapCar = new Car("Honda");
    cout << "Heap car model:" << heapCar -> model << endl;
    cout << "\n---End of main function---" << endl;
    delete heapCar;

    return 0;

}