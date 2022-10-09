#include<iostream>
using namespace std;
int main()
{
    int t,l,w,h,i;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> l >>w >> h;
        if((l>=1)&&(l<=50)&&(w>=1)&&(w<=50)&&(h>=1)&&(h<=50))
        {
            if((l<=20)&&(w<=20)&&(h<=20))
            {
                cout << "Case " <<i+1<< ": good" << endl;
            }
            else
                cout <<"Case "<<i+1<< ": bad" <<endl;
        }
    }
}
