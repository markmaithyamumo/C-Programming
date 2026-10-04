/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that shows units consumed by each house hold
Date:4/10/2026
*/
#include<stdio.h>
int main(){
	float units[10];
	int i;
	
	printf("          ELECTRICAL CONSUMPTION PER HOUSE HOLD \n");
	printf("          -------------------------------------\n");
	
	for(i=0; i<10; i++){
		
		printf("Enter units consumed by house hold %d: ",i+1);
		scanf("%f",&units[i]);	
			
	}
	
	printf("\n        CONSUMPTION REPORT \n");
	printf("        ------------------\n");
	
	for(i=0; i<10 ; i++){
		printf("House hold %d= %.2f units \n",i+1,units[i]);
	}
	
	return 0;
	
}