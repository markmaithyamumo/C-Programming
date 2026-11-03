
#include <stdio.h>
#include <stdlib.h>

// Define student structure
struct Student {
    char name[50];
    char reg_no[30];
    float marks;
};

int main() {

    FILE *fptr;
    struct Student student;

    // Open binary file in read mode
    fptr = fopen("results.dat", "rb");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("STUDENT EXAMINATION RESULTS\n");
    printf("---------------------------\n");

    // Read and display all student records
    while (fread(&student, sizeof(student), 1, fptr) == 1) {

        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n", student.marks);
        printf("---------------------------\n");
    }

    // Close the file
    fclose(fptr);

    return 0;
}
