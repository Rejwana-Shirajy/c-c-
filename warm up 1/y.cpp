
#include<iostream>
using namespace std;
int main()
{
    int n,m,a,result=0;
    cin>>n>>m>>a;
    if(a>=n && a>=m)
    {
        result=1;
        cout<<result<<endl;
    }
    else if(n%a>0 && m%a>0)
    {
        n=(n/a)+1;
        m=(m/a)+1;


    }
    else if(a>=n && m%a>0)
    {
        n=1;
        m=(m/a)+1;

    }
     else if(a>=m && n%a>0)
    {
        m=1;
        n=(n/a)+1;

    }



    result=n*m;
    cout<<result<<endl;
}
