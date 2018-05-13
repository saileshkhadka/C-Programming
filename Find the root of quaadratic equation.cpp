/* Write a program to find the root of quadratic equation */
/* Author:Sailesh Khadka */
/* Date:04/09/2018 */

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	printf("Enter the value of a,b,c:\n");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-4*(a*c);
	if
	(d>=0)
	{

	
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("The root of quadratic equation is:%f and %f\n",x1,x2);
		return(0);
		
}

	
}
