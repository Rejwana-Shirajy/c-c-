#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,m,m1,o=0;

    cin>>t;
    stack<int>st,st1;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a>=0&&a<=255)
        {
            while(a!=0)
            {
                m=a%2;
                a=a/2;
                st.push(m);
                //cout << m;

            }
            while(!st.empty())
            {
                //cout<<st.top();
                printf("%d",st.top());
                st.pop();
            }
            printf(" ");
        }
        if(b>=0&&b<=255)
        {
            while(b!=0)
            {
                m1=b%2;
                b=b/2;
                st.push(m1);
                //cout << m;

            }
            while(!st1.empty())
            {
                //cout<<st.top();
                printf("%d",st1.top());
                st1.pop();
            }
            printf(" ");
        }
    }
}
