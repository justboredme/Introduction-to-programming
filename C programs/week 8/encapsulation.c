#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int age;
};

void Setage(struct student_record *student, int new_age) {
    if (new_age >= 1 && new_age <= 119) {
        student->age = new_age;
    } else {
        printf("Error: invalid age! Age must be between 1 and 119.\n");
        student->age = 0;
    }
}

int Getage(const struct student_record *student) {
    return student->age;
}

int main() {
    struct student_record S1;
    strcpy(S1.name, "Alice");
    Setage(&S1, 20);

    printf("Student Name: %s\n", S1.name);
    printf("Student Age: %d\n", Getage(&S1));

    printf("\nAttempting to change age to -5...\n");
    Setage(&S1, -5);
    printf("Age after invalid attempt: %d\n", Getage(&S1));

    return 0;
}