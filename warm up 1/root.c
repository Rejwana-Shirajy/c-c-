#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    int m=0;
    for(i=a;i<=b;i=i*i)
    {
        m++;
    }
    printf("%d\n",m);
}
