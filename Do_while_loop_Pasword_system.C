/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that prompts the user to enter the correct password
Date:4/10/2026
*/
#include <stdio.h>
 int main(){
 	int password;
 	
 	do{
 		printf("Enter Password: ");
 		scanf("%d",&password);
 		
 		if(password !=1234){
 			printf("Wrong password.Try agin \n");
		 }
	 }while(password !=1234);
	 
	 printf("Access granted");
	 
	 return 0;
 }	