#include<iostream>
using namespace std;
int main()
{
    string s;
    int u=0,l=0;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
            //s[0]=s[0]-32;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            u++;
            //s[0]=s[0]-32;
        }
    }
    cout<<l<<u;
    if(u>l)
    {
        for(int i=0; i<n; i++){
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
            cout<<s[i];}
    }
    else if(u<=l)
    {
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='A')
            {
                s[i]=s[i]+32;
                cout<<s[i];
            }
            cout<<s[i];}
    }


    cout<<endl;

}
