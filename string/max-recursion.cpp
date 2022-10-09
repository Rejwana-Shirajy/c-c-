#include<bits/stdc++.h>
using namespace std;
int arr[100],n,r=-1;
void _Recursion(int i)
{
    if(r<arr[i])
    {
        r=arr[i];
    }
    if(i==0)
    {
        printf("%d",arr[i]);
        return;
    }
    printf("%d ",arr[i]);
    _Recursion(i-1);
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    _Recursion(n-1);
    printf("\n%d",r);
}


