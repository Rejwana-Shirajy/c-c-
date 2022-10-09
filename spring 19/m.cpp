#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%3==0)
    {
        cout<<"yes"<<endl;
    }
    else if(a%6==1)
    {
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;
}
