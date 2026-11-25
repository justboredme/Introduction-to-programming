#include <iostream>
using namespace std;

// The main function
int main() {
int number = 0;

// do-while loop: executes the body FIRST, then checks the condition
// This guarantees the body runs at least once
do {
cout << "Enter a positive number: ";
cin >> number;
if (number <= 0) {
cout << "Invalid! ";
}

} while (number <= 0); // Condition checked AFTER the body runs

cout << "You entered: " << number << endl;
return 0;
}