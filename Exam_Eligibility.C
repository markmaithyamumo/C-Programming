/*
Author: Mark Maithya Mumo
Admission Number: BCS-05-0574/2026
Description:program for calculating exam eligibility
*/
#include<stdio.h>
int main(){
	float Attendance;
	int Average_marks;
	
	printf("Enter Attendance: ");
	scanf("%f",&Attendance);
	
	printf("Enter Average marks: ");
	scanf("%d",&Average_marks);
	
	if(Attendance >=75 && Average_marks >=40){
		printf("Eligible for exam");
	}
	else{
	printf("Not eligile for exam");
	}
}
