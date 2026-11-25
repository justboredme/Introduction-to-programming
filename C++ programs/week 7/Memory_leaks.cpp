
#include <iostream>
using namespace std;

void createLeak() {
    int*ptr = new int(42);

    cout << " Inside function. The value is: " << *ptr << endl;
    cout << " Memory allocated at address: " << ptr << endl;

}

void fixLeak() {
    int* ptr = new int(42);

    cout << " Inside fixed function. Value:" << *ptr << endl;

    cout << " Memory allocated at address: " << ptr << endl;

    delete ptr; // Free the allocated memory
    ptr =nullptr;
    cout << "Memory has been successfully freed." << endl;
}
int main() {
    cout << "----Testing the leak---" << endl;
    createLeak();

    cout << "----Testing the fix---" << endl;
    fixLeak();
    return 0;
}

// Notes:
// - createLeak() was defined but never called, so the program did not demonstrate a leak.
// - main() now calls it before fixLeak(). The leak is intentional for this demonstration.
// - fixLeak() uses delete to free its allocated integer.
