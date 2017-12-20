#include <stdio.h>

int main(void) 
{
char str[50];
int l,i,temp;
scanf("%s",&str);
l=strlen(str);
for(i=0;i<(l/2)*2;i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("%s",str);
 return 0;
}
