/*
Author:Mark Maithya
Admission Number:BCS-05-0574/2026
Description:C program to calculate the simple interest 
Date:29/9/2026
*/
#include<stdio.h>
int main(){
	float principle_amount;
	float time;
	float rate;
	float simple_interest;
	
	printf("Enter Principle Amount: ");
	scanf("%f",&principle_amount);
	
	printf("Enter Time: ");
	scanf("%f",&time);
	
	printf("Enter Rate: ");
	scanf("%f",&rate);
	
	simple_interest=(principle_amount*time*rate)*0.01;
	
	printf("Simple Interest is= %.2f",simple_interest);
	
	return 0;	
	
	
}