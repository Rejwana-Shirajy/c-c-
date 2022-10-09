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

       if(s[i]=='0'||s[i] =='1' || s[i] =='B' )

        {
            if(s[i]=='0' || s[i]=='1')
            {
                if(s[i+1]=='B')
                {
                    continue;
                }
                if(s[i]=='B')
                {
                    s[i]++;
                }
                else{
                cout<<s[i];
               continue; }

            }

        }
    }}
