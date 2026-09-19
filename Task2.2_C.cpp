/*
Author:Mark Maithya Mumo
Admission Number: BCS-05-0574/2026
Description:Assignment prompting the user to enter Radius and Height
*/
#include<stdio.h>
int main() {
	//promptimg the user to enter height and radius
	float radius;
	float height;
	
	printf("Enter Radius: ");
	scanf("%f", &radius);
	
	printf("Enter Height: ");
	scanf("%f", &height);
	
	// outpute 
	
	printf("Radius =%.2f \n", radius);
	printf("Height =%.2f", height);
	
	return 0;
}
