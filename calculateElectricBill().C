/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that calculates the electric bill using functions 
Date:13/10/2026
*/
#include<stdio.h>
float calculateElectricBill (int units){
	float bill;
	if(units<=100){
		bill= units*10;
	}
	else if(units>100&& units<200){
		bill = (100 * 10) + ((units - 100) * 15);
	}
	else{
		bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
	}
	return bill;
}
int main(){
	int units;
	float bill;
	printf("Enter units consumed: ");
	scanf("%d",&units);
	
	bill= calculateElectricBill(units);
	
	printf("Electric bill is %.2f",bill);
}
