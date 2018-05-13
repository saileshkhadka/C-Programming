/* Write a program to calculate area of trapezium */
/* Author:Sailesh Khadka */
/* Date:04/08/2018 */

#include<stdio.h>
int main()
{
	float a,b,h,area;
	printf("Enter the value of two base and height:\n");
	scanf("%f %f %f",&a,&b,&h);
	area =0.5*(a+b)*h;
	printf("Area of trapezium is:%f",area);
	return(0);
	
}
