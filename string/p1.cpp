#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1="hello";
    string str2;
    cin>>str2;
    int sz=str2.length();
    int a=0;
    int i, count = 0;
    for(i=0; i<sz; i++)
    {
        if(str2[i]==str1[a])
        {
            a++;}
            //cout<<"\0";
            // cout<<"yes"<<endl;;
       // }
        // else if(str2[i]!=str1[a])
        //{
        //  c++;
        //cout<<str2[i];
        // cout<<"no"<<endl;}
    }
    if(a==5)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;


}



//return 0;

