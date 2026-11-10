
#include <stdio.h>
#include <stdlib.h>

void writeEmployee();
void readEmployee();
void appendEmployee();

int main()
{
    
    writeEmployee();

 
    readEmployee();


    appendEmployee();

   
    readEmployee();

    return 0;
}

void writeEmployee()
{
    FILE *fp;
    int id;
    char name[100], department[50];

    fp = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\class work\\employees.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Full Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Employee Department: ");
    scanf(" %[^\n]", department);

    fprintf(fp, "Employee ID: %d\n", id);
    fprintf(fp, "Full Name: %s\n", name);
    fprintf(fp, "Department: %s\n", department);
    fprintf(fp, "-------------------------\n");

    fclose(fp);

    printf("\nEmployee record saved successfully!\n");
}

void readEmployee()
{
    FILE *fp;
    char ch;

    fp = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\class work\\employees.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- EMPLOYEE RECORDS ---\n");


    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
}

void appendEmployee()
{
    FILE *fp;
    int id;
    char name[100], department[50];

    fp = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\class work\\employees.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\nEnter Another Employee's Details\n");

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Full Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Employee Department: ");
    scanf(" %[^\n]", department);

    fprintf(fp, "Employee ID: %d\n", id);
    fprintf(fp, "Full Name: %s\n", name);
    fprintf(fp, "Department: %s\n", department);
    fprintf(fp, "-------------------------\n");

    fclose(fp);

    printf("\nNew employee record appended successfully!\n");
}
