#include<stdio.h>
int main(){
	int Age;
	float Annual_income;
	
	printf("Enter Age: ");
	scanf("%d",&Age);
	
	printf("Enter Annual Income: ");
	scanf("%f",&Annual_income);
	
	if(Age>=21 && Annual_income>=21000){
		
		printf("Congratulations you qualified for a loan.");
		
	}
	else {
		printf("Unfortunately, we are unable to offer you a loan this time.");
	}
}
