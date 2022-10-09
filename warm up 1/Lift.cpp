#include<iostream>
using namespace std;
int main()
{
    int t,p,d,i,n=0,m=0;

    cin >> t;
    for(i=0;i<t;i++)
    {

        cin>> p >> d;
        if(p<d)
        {
            n=(d-p)*4+11;
            m=p*4+8+n;
        }
        else if(p>d)
        {
            n=(p-d)*4+11;
            m=p*4+8+n;
        }
        else
            m=p*4+8+11;

            cout <<"Case "<<i+1<<": "<< m << endl;

    }
}
