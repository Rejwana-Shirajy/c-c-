#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x,t;
    vector<int>v;
    cin>>t;
    if(t<=100){
    for(int j=0;j<t;j++)
    {
    cin >>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
        {
           //v.erase()=(v.push_back(x));
           x=0;
        }
        else
            v.push_back(x);
       sum+=x;
    }
    cout<<"Case "<<j+1<<": "<<sum<<endl;
    }
}
}
