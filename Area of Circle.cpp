/* Write a program to calculate an area of Circle */
/* Author:Sailesh Khadka */
/* Date:04/08/2018 */

#include<stdio.h>
int main()
{
	float r,area;
	printf("Enter the value of radius:\n");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("Area of circle is:%f",area);
	return(0);
}
