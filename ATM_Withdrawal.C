/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that calculates account balance after withdrawal 
Date:4/10/2026
*/
#include <stdio.h>
int main(){
	int balance= 50000;
	int withdrawal;
	
	
	while(balance>0){
		
		printf("Enter withdrawal amount: ");
		scanf("%d",&withdrawal);
		
		if(withdrawal== 0){
			printf("Withdrawal process stopped \n");
			break;
		}
		if(withdrawal>balance){
			printf("Insufficient funds");
			break;
		}
				
		balance=balance-withdrawal;
		
		printf("Withdrawal succesful \n");		
		printf("New account balance is %d \n",balance);
		
		
	}
	printf("Thank you for using the ATM ");
}
