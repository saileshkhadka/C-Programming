/* Write a program to find the square root of any number */
/* Author:Sailesh Khadka */
/* Date:04/09/2018 */

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("Enter the value of a:\n");
	scanf("%f",&a);
	b=sqrt(a);
	printf("The square root of number is:%.2f",b);
	return(0);
	
}
