#include <stdio.h>
int main()
{
    char ch;
    int lc,uc;
    scanf("%c",&ch);
    lc = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uc = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lc || uc)
        printf("vowel", ch);
    else
        printf("consonant", ch);
    return 0;
}
