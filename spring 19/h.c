#include<stdio.h>
//#include<bits/stdc++.h>
//using namespace std;
int main()
{
    int t,a,b,i;
    scanf("%d",&t);
    if(1<=t && t<=10000)
    {
        for(i=0; i<t; i++)
        {
            scanf("%d%d",&a,&b);
            if(1<=a&& b<=1000000001)
            {
                if(a>b)
                    printf(">\n");
                else if(a<b)
                    printf("<\n");
                else
                    printf("=\n");
            }

        }
    }
}
