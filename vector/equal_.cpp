#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>::iterator it;
    vector<int>v;
    int k,a,n;
    cin>>n>>k;

    if((1<=k)&&(k<=n)&&(n<=50))
    {
        for(int i=0; i<n; i++)
        {

                cin>>a;
                v.push_back(a);

        }
        int m=0;
        for(int i=0; i<n; i++)
        {

            if((v[i]>=v[k]-1)&&(v[i]>0)&&(v[i]<100))
            {
                m++;
            }
        }
        cout<<m<<endl;
    }

}

