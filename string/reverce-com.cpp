#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int n;
    cin>>s1>>s2;
    reverse(s2.begin(),s2.end());
    //cout<<s2<<endl;
         n=s1.compare(s2);
    if(n==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
