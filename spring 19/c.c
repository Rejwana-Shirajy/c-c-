#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0;
    char ch[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(ch);
        puts(ch);
    }
}
