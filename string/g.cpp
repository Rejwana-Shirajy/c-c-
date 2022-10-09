#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,s1,s2;
    int n,t;
    cin>>t;
    for(int j=0;j<t;j++){
    cin>>s;
    n=s.size();
    if(n>10){
    for(int i=0; i<1; i++)
    {
        s1=s[0];
    }
    for(int i=n; i>n-1; i--)
    {
        s2=s[n-1];
    }
    cout<<s1<<n-2<<s2<<endl;
    }
    else
        cout<<s<<endl;}
}
