#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,t,n,j,arr[1000];
    cin >> t;
    for(i=0;i<t;i++)
    {
        double avg=0,sum=0,m=0,p=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            sum+=arr[j];
        }

        avg=sum/n;
        for(j=0;j<n;j++)
        {
            if(avg<arr[j])
                m++;
        }
        //cout<<m;
        p=(m/n)*100;
        cout<<fixed;
        cout<<setprecision(3)<<p<<"%"<<endl;
    }

}


