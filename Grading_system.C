/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that displays marks and grades of students
Date:4/10/2026
*/
#include <stdio.h>
int main(){
	int marks;
	char grade;
	char choice;
	
	do{
		do{
		printf("Enter student's marks: ");
		scanf("%d",&marks);
		
		if(marks<0 || marks>100){
			printf("Invalid marks. Enter student's marks again \n");
		}
	}while(marks<0 || marks>100);
	
	//the marks and grades
	
			if (marks>=80 ){
				grade='A';				
			}
			else if(marks>=70 ){
				grade='B';
			}
			else if(marks>=60 ){
				grade='C';
			}
			else if(marks>=50 ){
				grade='D';
			}
			else if(marks<=49){
				grade='F';
			}
			printf("Marks:%d \n",marks);
			printf("Grade:%c \n",grade);
		//prompting the user to chose yes(y)or no(n)	
			printf("Do you want to enter another students marks? (y/n): ");
			scanf(" %c", &choice);
			
		
	}while(choice=='y' || choice=='y');
	
	printf("End\n");	
	
}