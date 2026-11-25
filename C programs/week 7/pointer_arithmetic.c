#include <stdio.h>
int main() {

// Declare and initialise an array of 5 integers
// In C, arrays are contiguous blocks of memory.
int numbers[5] = {10, 20, 30, 40, 50};

// Declare a pointer named 'ptr' that points to an integer.
// We assign it the array name 'numbers'.
// In C, an array name acts as a pointer to its first element.
int *ptr = numbers;

// Display a header
printf("Array elements accessed via pointer arithmetic:\n");

// Loop 5 times to access each element
for (int i = 0; i < 5; i++) {

// *ptr means "dereference" - go to the address stored in ptr and get the value.
// printf uses %d for integers.
printf("Value: %d\n", *ptr);
ptr++;
}

// Reset the pointer back to the start of the array
ptr = numbers;
printf("\nAccessing using offset arithmetic:\n");
for (int i = 0; i < 5; i++) {
printf("Index %d has value: %d\n", i, *(ptr + i));
}

// Return 0 to signal successful completion
return 0;
}