#include<iostream>
#include<stack>
using namespace std;

stack<int>st;
int main()
{
    int a,n,m,r,s,sum=0;
    cin>>n>>m;
    while(n!=0 &&m!=0)
    {
        sum=0;
        r=n%10;
        s=m%10;
        sum=r+s;
        if(sum>=10)
        {
            sum=sum%10;
        }
        n/=10;
        m/=10;
        st.push(sum);
        while(!st.empty())
        {
            a=st.top();
            st.pop();
           // st.push(sum);
            cout<<a;
        }

    }
    //cout<<sum;
}
