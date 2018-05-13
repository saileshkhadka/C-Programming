/* Write a program to find the average, total and percenntage */
/* Author:Sailesh Khadka */
/* Date:04/10/2018 */

#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,s7;
	float average,totalsum,percentage;
	float totalmarks=700;
	/* Declaration and initialization of variable */
	
	printf("Enter the marks of seven subjects:\n");
	scanf("%f %f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
	totalsum=(s1+s2+s3+s4+s5+s6+s7);
	printf("The total marks is:%f\n",totalsum);
	average=(totalsum)/7;
	printf("The average marks is:%f\n",average);
	percentage=totalsum/(totalmarks)*100;
	printf("The percentage marks is:%f\n",percentage);
	return(0);
	
	
}
