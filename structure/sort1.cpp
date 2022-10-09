#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)

using namespace std;
struct name
{
    int x,y;
};
bool cmp(name n1,name n2)
{

    if(n1.x<n2.x)return true;
    else if (n1.x==n2.x&&n1.y>n2.y)return true;
    return false;

}


int main()
{
    io;
    int n,t;
    scanf("%d",&t);

    if(t<=10)
        for(int j=0; j<t; j++)
        {
            scanf("%d",&n);
            name arr[n];
            for(int i=0; i<n; i++)
            {
                scanf("%d%d",&arr[i].x,&arr[i].y);

            }

            sort(arr,arr+n,cmp);
            for(int i=0; i<n; i++)
            {
                printf("%d %d\n",arr[i].x,arr[i].y);
            }

        }
}
/*1

5

3 4

-1 2

5 -3

3 3

-1 -2

5

3 4

-1 2

5 -3

3 3

-1 -2
*/
