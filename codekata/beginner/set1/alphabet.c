#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("alphabet",c);
    else
        printf("not alphabet",c);
    return 0;
}
