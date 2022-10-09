
#include<bits/stdc++.h>
using namespace std;
int n,m,cnt[100];
vector<int>v[100];
int main()
{
    int i,j,k,t,p,a,b,cas=1;
     while(scanf("%d %d",&n,&m)==2)
    {
        //int i,a,b;
       memset(cnt,0,sizeof(cnt));
       queue<int>q;

        for(i=0;i<m;i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            cnt[b]=cnt[b]+1;//indegree
        }
        for(int i=1;i<=n;i++)
        {
            if(cnt[i]==0) q.push(i);//indegree 0
        }
        while(!q.empty())
        {
            a=q.front();
            q.pop();
            cnt[a]=-1;
            printf("%d ",a);
            for(i=0;i<v[a].size();i++)
            {
                b=v[a][i];
                cnt[b]--;
                if(cnt[b]==0) q.push(b);
            }
        }
        printf("\n");
    }
    return 0;
}
