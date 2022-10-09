#include<stdio.h>
int main()
{
    int n,i,t,r,sum;
    scanf("%d",&t);
    if(1<=t && t<=1000)
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        if(1<=n && n<=10000000)
        while(n!=0)
        {
            r=n%10;
            sum+=r;
            n/=10;
        }
        printf("%d\n",sum);
    }
}
