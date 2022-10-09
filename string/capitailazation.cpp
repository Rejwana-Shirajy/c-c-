#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    //int n=s.size();
    cin>>s;
    int a=0,d=0;
    for(int i=0; i<n; i++)
    {

       if(s[i]=='A'||s[i] =='D')

        {
            if(s[i]=='A')
            {
                a++;

            }
            else
                d++;
        }
    }
    cout<<a<<" "<<d<<endl;
    if(a>d)
    {
        cout<< "Anton"<<endl;
    }
    else if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a==d)
        cout<<"Friendship"<<endl;

}


