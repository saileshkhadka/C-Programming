
/* Write a program to read a temperature in farenheit and convert it into celsius */
/* Author: Sailesh Khadka */
/* Date: 04/08/2018 */

#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the value of temperature in fareneit:\n");
	scanf("%f",&f);
	c=5/9.0*(f-32);
	printf("This program converts farenheit to celsius:\n %f",c);
	return(0);
	

}
