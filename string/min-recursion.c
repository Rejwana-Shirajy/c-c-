#include<bits/stdc++.h>
using namespace std;
int arr[100],n,r=10000000;
void _Recursion(int i)
{
    if(r>arr[i])
    {
        r=arr[i];
    }
    if(i == 0)
    {
        printf(" %d",arr[i]);
        return;
    }
    printf(" %d",arr[i]);

    _Recursion (i-1);//ei jayga thk 1st line  e back kre


}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        scanf("%d",&arr[i]);

    }
    _Recursion(n-1);//i ar 1st value 0 pathaisi
    printf("\n%d",r);
    return 0;

}
