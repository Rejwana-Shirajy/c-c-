#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int z=s.size();
    int i;
    for( i = 0; i < z; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'|| s[i]=='+')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;


}
