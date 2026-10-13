/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that converts temperature in fahrenheit into temperature in degree celsius 
Date:13/10/2026
*/
#include<stdio.h>
float convertToCelcius(float temperature){
	float celsius;
	
	celsius=(temperature-32)*5/9;
	
	return celsius;
}
int main(){
	float temperature;
	float celsius;
	
	printf("Enter Temperature in Fahrenheit: ");
	scanf("%f",&temperature);
	
	printf("Temperature in Celcius is: %.2f", convertToCelcius(temperature));
}