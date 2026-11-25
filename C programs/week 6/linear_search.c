#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
for (int i = 0; i < size; i++) {

if (arr[i] == target) {

return i;
}
}
return -1;
}

// The main function
int main() {
int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};
int size = sizeof(numbers) / sizeof(numbers[0]);

// Declare a variable to store the user's target value
int target;

// Display the array contents so the user knows what is inside
printf("Array contents: ");
for (int i = 0; i < size; i++) {
printf("%d ", numbers[i]);
}
printf("\n");
// Ask the user to enter a number to search for
printf("Enter a number to search: ");
//  nerscanf requires the address-of operator (&) for integers
scanf("%d", &target);

// Call the linearSearch function and store the result
int position = linearSearch(numbers, size, target);

// Check if the element was found (position != -1 means found)
if (position != -1) {
// Display the position (index) where the element was found
printf("Element found at index: %d\n", position);
} else {
// Display a message if the element was not found
printf("Element not found in the array.\n");
}

return 0;
}