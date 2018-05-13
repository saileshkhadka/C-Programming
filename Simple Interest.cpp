
/* Write a program to find a Simple Interest */
/* Author: Sailesh Khadka */
/* Date:04/08/2018 */
 
#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("Enter a principal:\n");
	printf("Enter a time:\n");
	printf("Enter a rate:\n");
		scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("Simple interest is %f",si);
	return(0);
	
	
}
