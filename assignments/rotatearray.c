#include <stdio.h>

int main(void) 
{
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<2;i++)
	{ 
	
		temp=a[0];
		for(j=1;j<5;j++)
		{
		a[j-1]=a[j];

		}
		a[j-1]=temp;
	
	}
		for(j=0;j<5;j++)
		printf("\t%d",a[j]);
	return 0;
}
