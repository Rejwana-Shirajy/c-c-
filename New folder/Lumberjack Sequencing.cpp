#include<iostream>

using namespace std;
int main()
{
    int n,i,nu[20],j,a;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(j=0; j<n; j++)
    {
        for(i=0; i<10; i++)
        { a=0;
            cin>>nu[i];

        }


        if(nu[0]>nu[1])
        {
            for(i=0; i<10; i++)
            {

                if(nu[i+1]<=nu[i+2]  && i+1<10 && i+2<10)
                {

                    //cout<<"Unordered"<<endl;
                    a++;
                    break;
                }

            }
        }


        if(nu[0]<nu[1])
        {
            for(i=0; i<10; i++)
            {

                if(nu[i+1]>=nu[i+2]  && i+1<10 && i+2<10)
                {

                   // cout<<"Unordered"<<endl;
                   a++;
                    break;
                }

            }
        }
        if(a==0)
        {
            cout<<"Ordered"<<endl;
        }
        else{
            cout<<"Unordered"<<endl;
        }






    }


}

