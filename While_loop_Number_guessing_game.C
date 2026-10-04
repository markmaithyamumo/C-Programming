/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program that prompts the user to guess numbers between 1 and 20
Date:4/10/2026
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int secrete_number;
	int guess =0;
	int attempts =0;
	
//generating a random number between 1 and 20
	
	srand(time(NULL));
	secrete_number= rand() % 20+1;
	
	printf("Guess the number between 1 and 20 \n");
	
	while(guess != secrete_number){
		printf("Enter your guess: ");
		scanf("%d",&guess);
		
		attempts++;
		
		if(guess> secrete_number){
			printf("Too High! \n");
		}
		else if(guess< secrete_number){
			printf("Too Low! \n");
		}
		else{
			printf("Congratulations! \n");
			printf("Total attempts: %d",attempts);
		}
	}
	
	return 0;
}