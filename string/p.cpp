
#include<iostream>
using namespace std;
main()
{
    int s[100];
    int n;
    cin>>s[n];
     n=sizeof(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]!='W'&&s[i]+1!='U'&&s[i]+2!='B')
            cout<<s[i]<<endl;
    }
}
