/* Write a program to find the average of three numbers */
/* Author: Sailesh Khadka */
/* Date:04/04/2018 */ 

#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,average;
	printf("Enter the value of a:\n");
	printf("Enter the value of b:\n");
	printf("Enter the value of c:\n");
	scanf("%f %f %f",&a,&b,&c);
	average=(a+b+c)/3;
	printf("Average of three number is:%f",average);
	getch();
	
}
