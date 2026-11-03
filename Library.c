
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char title[100];

    // Open the file in append mode
    fptr = fopen("borrowed_books.txt", "a");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Ask the librarian to enter a book title
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Store the title in the file
    fprintf(fptr, "%s", title);

    // Close the file
    fclose(fptr);

    // Display confirmation
    printf("Book title successfully stored!\n");

    return 0;
}
