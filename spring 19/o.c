#include<stdio.h>
int main()
{
    char ch,sen[100],s[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c\n%s\n%s\n",ch,s,sen);
}
