/* Write a program to use the modulus operator */
/* Author:Sailesh Khadka */
/* Date:04/09/2018 */

#include<stdio.h>
int main()
{
	int a,b,modulus;
	printf("Enter the value of a and b:\n");
	scanf("%d %d",&a,&b);
	modulus=a%b;
	printf("The modulus operator is:%d",modulus);
	return(0);
	
	
}
