/*
Author: Mark Maithya Mumo
Admission Number: BCS-05-0574/2026
Description:program for calculating total water bill
*/
#include<stdio.h>
int main(){
	int units_consumed;
	float Total_water_bill,amount; 
		
	printf("Units consumed: ");
	scanf("%d",&units_consumed);
		
	if(units_consumed <=30 ){
		amount=20;
		Total_water_bill=units_consumed*amount;
		printf("Total water bill: %.2f",Total_water_bill);	
	}
	
	else if(units_consumed >=31 && units_consumed<60){
		amount=25;
		Total_water_bill=units_consumed*amount;
		printf("Total water bill: %.2f",Total_water_bill);	
	}
	
	else if(units_consumed >=60 ){
		amount=30;
		Total_water_bill=units_consumed*amount;
		printf("Total water bill: %.2f",Total_water_bill);		
	}
	
	return 0;
}

