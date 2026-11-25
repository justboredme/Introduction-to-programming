#include <iostream>
using namespace std;
int main() {

int number;
cout << "Enter a positive number: ";
cin >> number;

// While loop: checks condition BEFORE executing the body
// If the user entered a valid number (positive), the loop never runs
// If the user entered an invalid number, the loop repeats
while (number <= 0) {

// Display an error message
cout << "Invalid! Please enter a positive number: ";

cin >> number;

} // End of while loop - condition is re-checked

// This line runs only when a valid number is entered
cout << "You entered: " << number << endl;

return 0;
}