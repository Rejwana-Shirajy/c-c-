#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    //int n;
    cin>>s;
    int n=s.size();
    int d=0,d1=0;
    for(int i=0; i<n; i++)
    {

       if(s[i]=='1'||s[i] =='0')

        {
            for(int j=i;j<=11;i++){
            if(s[i]==1)
            {
                cout<<"d";

            }
            else if(s[i]==0){
            cout<<"d1";

        }
        else
            cout<<"no";
    }}
}
}
