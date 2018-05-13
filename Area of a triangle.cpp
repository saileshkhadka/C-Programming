/* Write a program to print area of a triangle */

#include<stdio.h>
#include<math.h>
  main()
{
	int a,b,c,s,area;
	printf("Enter the values of a, b and c \n");
	scanf("%d %d %d", &a, &b, &c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of a Triangle is %d",area);
	return(0);
	
	
}
