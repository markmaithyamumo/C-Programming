/*
Author:Mark Maithya Mumo
Admmision Number: BCS-05-0574/2026
Description: Weekly Assignment (task 2)
*/
#include<stdio.h>
int main(){
	//propmting the user to enter Height,Phone number and Bank balance
	int Height;
	int Phone_Number;
	double Bank_Balance;
	
	printf("Enter height: ");
	scanf("%d", &Height);
	
	printf("Enter phone number: ");
	scanf("%d", &Phone_Number);
	
	printf("Enter bank balance: ");
	scanf("%lf", &Bank_Balance);
	
	printf("Height =%d \n",Height);
	printf("Phone number =%d \n",Phone_Number);
	printf("Bank Balance =%.2lf",Bank_Balance);
	
	return 0;
	}
