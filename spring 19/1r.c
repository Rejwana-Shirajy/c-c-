
#include <stdio.h>
int main(){

    int n,a,b,i;
    scanf("%d",&n);

    if(n<=200000)
        for( i=0; i<n; i++)
        {
          scanf("%d %d",&a,&b);

            if(1<=a && b<=100000)
            {
                printf("Case %d: %d\n ",i+1,a+b);
            }
        }
}
