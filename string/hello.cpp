#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    string s1="0000000";
    string s2="1111111";
    cin>>s;
    //int n=sizeof(s);
    int n=s.length();
    int a=0,b=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]==s1[a])
        {
            a++;
        }
        if(s[i]==s2[b])
        {
            b++;
        }

    }
    cout<<a<<" "<<b;
    if(a>=1&&b>=1)
    {
        if(a==7)
        {
            cout<<"YES"<<endl;
        }
        else if(b==7)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
