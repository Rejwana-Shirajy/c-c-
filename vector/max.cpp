#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,j,n,x;
    vector<int>v;
    cin>>t;
    for(i=0; i<t; i++)
    {
        v.clear();

        cin>>n;

        for(j=0; j<n; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<i+1<<": "<<v.back()<<endl;

    }
}
