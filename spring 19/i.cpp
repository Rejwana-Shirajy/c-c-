#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    if(t<=25)
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(0<=n && n<=20)
        {
            if(n<=10)
            {
                b=n;
                a=0;
            }
            else
            {
                b=10;
                a=n-10;
            }
            cout<<a<<" "<<b<<endl;
        }

    }
}
