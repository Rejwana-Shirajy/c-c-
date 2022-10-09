#include<iostream>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int m=0;
        m=n+(n-1)/(k-1);
        cout<<m<<endl;
    }
}
