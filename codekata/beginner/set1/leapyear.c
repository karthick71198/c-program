#include <stdio.h>

int main(void) 
{
int year;
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
printf("it is a leap year",year);
else
printf("not a leap year",year);
}
else
printf("it is a leap year",year);
}
else
printf("not a leap year",year);
return 0;
}
