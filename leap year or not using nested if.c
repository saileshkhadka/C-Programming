#include <stdio.h>
 
int main() 
{
    int l;
    printf("Enter a year:\n");
    scanf("%d",&l);
    if(l%4==0)
    {
        if(l%100==0)
        {
            if(l%400==0)
        
            printf("%d is a leap year\n",l);
        
        else
        
            printf("%d is not a leap year",l);
        }
        else
        
            printf("%d is not a leap year",l);
    }
        else
        
            printf("%d is not a leap year",l);
            return (0);
        
    }


