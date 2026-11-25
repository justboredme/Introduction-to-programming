// ACTIVITY 2: STACK VS HEAP STRUCTS IN C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[20];
};

// Simulated constructor
void initCar(struct Car *c, const char *modelName) {
    strcpy(c->model, modelName);
    printf("Car created: %s\n", c->model);
}

// Simulated destructor (cleanup)
void destroyCar(struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main() {
    printf("--- Creating Stack Object ---\n");
    struct Car stackCar;
    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Object ---\n");
    struct Car *heapCar = (struct Car*)malloc(sizeof(struct Car));

    if (heapCar != NULL) {
        initCar(heapCar, "Honda");
        printf("Heap car model: %s\n", heapCar->model);
    }

    printf("\n--- End of main function ---\n");

    // Heap memory must be freed manually
    if (heapCar != NULL) {
        destroyCar(heapCar);
        free(heapCar);
        heapCar = NULL; // prevent dangling pointer
    }

    // stackCar is destroyed automatically here
    return 0;
}