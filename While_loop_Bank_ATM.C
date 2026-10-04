/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that calculates and shows the account balance
Date:4/10/2026
*/
#include<stdio.h>
int main(){
	float balance;
	float withdraw;
	
	printf("Enter Account Balance:Ksh ");
	scanf("%f",&balance);
	
	while(balance>0){
		printf("\nEnter amount to withdraw:Ksh ");
		scanf("%f",&withdraw);

//calculation to get the bank balance
		
	balance=balance-withdraw;
	
		printf("\nYour account balance is:Ksh %.2f \n",balance);
	}
	return 0;
}