/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that calculates fare of a passenger using functions
Date:13/10/2026
*/
#include<stdio.h>
float calculatefare(int distance){
	float fare;
	
	fare= distance*50;
}
int main(){
	int distance;
	
	printf("Enter Distance: ");
	scanf("%d",&distance);
	
	printf("Total fare= %.2f",calculatefare(distance));
	
}