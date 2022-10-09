#include<stdio.h>
//#include<bits/stdc++.h>
//using namespace std;
int main()
{
    int n,a,b;
    //cin>>n;
    scanf("%d",&n);
    if(n<=200000)
        for(int i=0; i<n; i++)
        {
            //cin>>a>>b;
            scanf("%d%d",&a,&b);
            if(1<=a && b<=100000)
            {
                //cout<<"Case "<<i+1<<": "<<a+b<<endl;
                printf("Case %d: %d\n",i+1,a+b);
            }
        }
}
