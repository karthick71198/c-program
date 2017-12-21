#include <stdio.h>
int main(void)
{
	char s[50];
	int i,j,k,count,l;
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		count=1;
		for(j=i+1;j<l;j++)
		{
		if(s[i]==s[j])
		{
		count++;
		for(k=j+1;k<l;k++)
		{
			s[k-1]=s[k];
		}
		s[k-1]='\0';
		l--;
		}
		}
			printf("%c-%d\t",s[i],count);
	}

	return 0;
}
