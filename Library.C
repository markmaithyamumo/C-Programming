/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:A C-program to calculate fines given to students(library department) 
Date created:29/9/2026
*/
#include<stdio.h>
int main(){
	int book_ID;
	int due_date;
	int return_date;
	int days_overdue;
	int fine_rate;
	int fine_amount;
	
	//prompting the user to enter the values
	
	printf("Enter Book ID: ");
	scanf("%d",&book_ID);
	
	printf("Enter Due Date: ");
	scanf("%d",&due_date);
	
	printf("Enter Return Date: ");
	scanf("%d",&return_date);
	
	//CALCULATIONS
	
	days_overdue=return_date-due_date;
	
	if (days_overdue <=7){
		fine_rate=20;
		fine_amount=days_overdue*fine_rate;
	}
	else if(days_overdue>=8 && days_overdue<=14){
		fine_rate=50;
		fine_amount=days_overdue*fine_rate;
	}
	else if(days_overdue>=15){
		fine_rate=100;
		fine_amount=days_overdue*fine_rate;
	}
	else{
		printf("No fine");
			
	}
	
	//the final output
	printf("Book ID is %d \n",book_ID);
	printf("Due date is %d \n",due_date);
	printf("Return date is %d \n",return_date);
	printf("Days overdue is %d \n",days_overdue);
	printf("Fine rate is %d \n",fine_rate);
	printf("Fine amount is %d \n",fine_amount);
	
	return 0;
	
	
}