#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false)

using namespace std;

struct new_data_type
{
    int id,b,m,e;
    int arr[10];
    new_data_type(int id1,int b1,int e1,int m1)
    {
        id=id1;
        b=b1;
        e=e1;
        m=m1;
    }
};


int value_swap(new_data_type *a,new_data_type *b)
{
    new_data_type *temp;
    temp->b=a->b;
    temp->e=a->e;
    temp->m=a->m;
    a->b=b->b;
    a->e=b->e;
    a->m=b->m;
    b->b=temp->b;
    b->e=temp->e;
    b->m=temp->m;
    return 0;
}


bool cmp(new_data_type n1,new_data_type n2)
{
    if(n1.m>n2.m) return true;
    else if(n1.m==n2.m && n1.e>n2.e) return true;
    else if(n1.m==n2.m && n1.e==n2.e && n1.b>n2.b) return true;
    return false;
}



int main()
{


    io;

    /*
    new_data_type v1,v2;
    v1.b=40;
    v1.e=50;
    v1.m=60;

    v2.b=70;
    v2.e=80;
    v2.m=90;


    value_swap(&v1,&v2);

    printf("Bangla= %d, English= %d, Math= %d\n",v1.b,v1.e,v1.m);
    printf("Bangla= %d, English= %d, Math= %d\n",v2.b,v2.e,v2.m);



    //printf("Bangla= %d, English= %d, Math= %d\n",v1.b,v1.e,v1.m);
    //printf("Bangla= %d, English= %d, Math= %d\n",v2.b,v2.e,v2.m);
    //cout<<v1.b<<" "<<v1.e<<" "<<v1.m<<endl;
    /*
    new_data_type temp=v1;
    v1=v2;
    v2=temp;

    //printf("Bangla= %d, English= %d, Math= %d\n",v1.b,v1.e,v1.m);
    //printf("Bangla= %d, English= %d, Math= %d\n",v2.b,v2.e,v2.m);

    /*
    int a=10,*p;
    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);
    *p=40;
    printf("%d\n",p);
    printf("%d\n",*p);
    int **p2;
    p2=&p;
    */
    /*
    new_data_type *p;
    p=&v1;
    printf("%d\n",p);
    */
    /*
    int arr[10];
    new_data_type brr[10];
    brr[0].b=50;
    brr[0].e=60;
    brr[0].m=70;
    brr[1].b=10;
    brr[1].e=20;
    brr[1].m=30;
    brr[1]=brr[0];
    */

    /*int n;
    scanf("%d",&n);
    new_data_type arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].id=i+1;
        scanf("%d%d%d",&arr[i].b,&arr[i].e,&arr[i].m);
    }
    sort(arr,arr+n,cmp); //cmp is a user defined function

    for(int i=0;i<n;i++)
    {
        printf("Student %d: %d %d %d\n",arr[i].id,arr[i].b,arr[i].e,arr[i].m);
    }
*/

    vector<new_data_type>arr;
    int n,b,e,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&b,&e,&m);
        arr.push_back(new_data_type(i+1,b,e,m));
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<n;i++)
    {
        printf("Student %d: %d %d %d\n",arr[i].id,arr[i].b,arr[i].e,arr[i].m);
    }

}
/*
3
10 90 90
40 100 90
70 90 90
*/
