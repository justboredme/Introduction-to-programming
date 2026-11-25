// ============================================================
// ACTIVITY 1: BASIC FILE I/O IN C
// Learning Outcome: Read numbers, sum them, write to a file
// ============================================================

#include <stdio.h>  // REQUIRED for FILE, fopen, fscanf, fprintf, fclose
#include <stdlib.h> // REQUIRED for exit()

int main() {
    FILE *inputFile;
    FILE *outputFile;

    // Open file for reading ("r" mode). fopen returns NULL on failure.
    inputFile = fopen("numbers.txt", "r");

    if (inputFile == NULL) {
        printf("Error: Could not open numbers.txt for reading!\n");
        return 1;
    }

    int num;
    int sum = 0;

    printf("Reading numbers from file...\n");

    // fscanf works like scanf but takes the FILE pointer first.
    while (fscanf(inputFile, "%d", &num) != EOF) {
        printf("Read: %d\n", num);
        sum += num;
    }

    fclose(inputFile);

    printf("Total Sum: %d\n", sum);

    // Open file for writing ("w" mode). Creates it, or overwrites if it exists.
    outputFile = fopen("sum.txt", "w");

    if (outputFile == NULL) {
        printf("Error: Could not create sum.txt for writing!\n");
        return 1;
    }

    fprintf(outputFile, "The total sum is: %d\n", sum);
    fprintf(outputFile, "Calculated automatically by the C program.\n");

    fclose(outputFile);

    printf("Result successfully saved to sum.txt!\n");

    return 0;
}