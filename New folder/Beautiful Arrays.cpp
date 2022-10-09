#include<iostream>

using namespace std;
int main()
{
    int n,m,i,nu[20],j,a,b;
    cin>>n;

    for(j=0; j<n; j++)
    {
        cin>>m;
        for(i=0; i<m; i++)
        {
            a=1,b=0;
            cin>>nu[i];


        }
        for(i=0; i<m; i++)
        {
            if(nu[i]!=nu[i+1])
            a*=nu[i];


        }
        for(i=0; i<m; i++)
        {
            if(a==nu[i])
            {
                b=1;

                break;
            }



        }
            if(b==1)
            {
                cout<<"yes"<<endl;

            }
            else
            {
                cout<<"no"<<endl;
            }










    }


}

