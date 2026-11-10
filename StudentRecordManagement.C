
#include <stdio.h>
#include <stdlib.h>


void saveStudent();
void displayStudents();
void addStudent();

int main()
{

    saveStudent();


    displayStudents();


    addStudent();


    displayStudents();

    return 0;
}


void saveStudent()
{
    FILE *fp;
    int admission;
    char name[100], course[100];

    fp = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\class work\\students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter Student Admission Number: ");
    scanf("%d", &admission);

    printf("Enter Student Full Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Student Course: ");
    scanf(" %[^\n]", course);

    fprintf(fp, "Admission Number: %d\n", admission);
    fprintf(fp, "Full Name: %s\n", name);
    fprintf(fp, "Course: %s\n", course);
    fprintf(fp, "-------------------------\n");

    fclose(fp);

    printf("\nStudent record saved successfully!\n");
}


void displayStudents()
{
    FILE *fp;
    char ch;

    fp = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\class work\\students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- STUDENT RECORDS ---\n");

 
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
}


void addStudent()
{
    FILE *fp;
    int admission;
    char name[100], course[100];

    fp = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\class work\\students.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\nEnter Another Student's Details\n");

    printf("Enter Student Admission Number: ");
    scanf("%d", &admission);

    printf("Enter Student Full Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Student Course: ");
    scanf(" %[^\n]", course);

    fprintf(fp, "Admission Number: %d\n", admission);
    fprintf(fp, "Full Name: %s\n", name);
    fprintf(fp, "Course: %s\n", course);
    fprintf(fp, "-------------------------\n");

    fclose(fp);

    printf("\nNew student record added successfully!\n");
}
