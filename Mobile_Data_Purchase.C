/*
Author:Mark Maithya Mumo
Admission number:BCS-05-0574/2026
Description:C program prompting the user to choose the data bundles they want
Date:20/9/2026
*/#include<stdio.h>
int main(){
	int cost;
	int choice;
	
	//choises to choose from
	
	printf("1. Ksh50=100MB \n");
	printf("2. Ksh200=500MB \n");
	printf("3. Ksh350=1 GB \n");
	printf("4. Sh600=2 GB \n");
	
	//prompting the user to choose an choice
	
	printf("Enter your choise(1-4): ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			cost=50;
			printf("You have selected 100MB. Cost= %d Ksh\n",cost);
		break;
		
		case 2:
			cost=200;
			printf("You have selected 500MB. Cost= %d Ksh\n",cost);
		break;
		
		case 3:
			cost=350;
			printf("You have selected 1 GB. Cost= %d Ksh\n",cost);
		break;
		
		case 4:
			cost=600;
			printf("You have selected 2 GB. Cost= %d Ksh\n",cost);
		break;
		
		default:
			printf("Invalid choise \n");	
			
	}
	
	return 0;	
	
}