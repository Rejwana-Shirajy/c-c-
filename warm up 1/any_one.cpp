#include<iostream>
using namespace std;
int main()
{
    int n,t,a,b,i,c,j;
    cin>>t;


    for(i=0; i<t; i++)
    {
        cin>>n;
        int x=0;
        for(j=0; j<n; j++)
        {
            cin>>a>>b>>c;
            x+=a*c;
        }
        cout <<x <<endl;
    }
}


