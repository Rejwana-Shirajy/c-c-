#include<iostream>
using namespace std;
int main()
{
    int a,b,i,t,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int sum=0;
        cin>>a>>b;
        if((0<=a)&&(a<=b)&&(b<=100))
        for(j=a;j<=b;j++)
            if(j%2!=0)
                sum+=j;
            cout <<"Case "<<i+1<<": "<<sum<<endl;
    }
}
