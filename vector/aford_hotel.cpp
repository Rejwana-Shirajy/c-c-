#include<iostream>
using namespace std;
int main()
{
    int n,b,h,w,p,a,i;
    while(cin>>n>>b>>h>>w)
    {


    for(int j=0; j<h; j++)
    {
        cin>>p;
        if((p*w)<=b)

        {
            for(i=0; i<w; i++)
            {
                cin>>a;}
                if(a>=n)
                {
                    cout<<p*w<<endl;
                    break;
                }
                else
                {
                    cout<<"stay home"<<endl;
                    break;
                }



        }
        //else
          //  cout<<"stay home"<<endl;
    }
    }
}
