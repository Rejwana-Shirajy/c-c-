#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int t,a,b,i,n;
    while(cin>>a>>b)
    {
        if((a==0)&&(b==0))
        {
            break;
        }

    int m=0;
    for(i=a; i<=b; i++)
    {
        //if(sqrt(i)==i)

        n=sqrt(i);
        if(n*n==i)
            m++;

    }cout<<fixed;
    cout<<setprecision(3)<<m<<endl;
    }
}
