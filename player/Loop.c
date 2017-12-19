#include <stdio.h>

int main(void) 
{
int a=9,i,c=0,d=0;
for(i=0;i<4;i++)
{
d=a*pow(10,i)+d;
c=c+d;	
}
printf("%d",c);
}
