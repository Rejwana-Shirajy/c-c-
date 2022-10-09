#include<bits/stdc++.h>
using namespace std;
int main()

{
    int i;
    char s[100000];
    while(gets(s))
    {
        for(i=0; s[i]; i++)
        {
            printf("%c",s[i]-7);

        }
        printf("\n");
    }
}
