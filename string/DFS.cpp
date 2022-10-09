
#include <bits/stdc++.h>
using namespace std;
int n, m, row, col, visited[10][10];
char arr[10][10];
int xx[]={1,0,-1,0};//4-directional array
int yy[]={0,1,0,-1};//4-directional array
stack <pair<int, int> > st;
void dfs(int x, int y)
{
    visited[x][y]=1;//grey
    for( int i=0; i<4; i++)
    {
        int m=x+xx[i];//new x
        int n=y+yy[i];//new y
        if( m>=0 && m<row && n>=0 && n<col
           && visited[m][n]==0 && arr[m][n]=='.')
        {
            st.push(make_pair(m, n));//stack
            dfs(m, n);//recursion
        }
    }
    printf("%d %d\n", st.top().first, st.top().second);
    visited[st.top().first][st.top().second]=2;//black
    st.pop();
}
int main()
{
    int i, j, k, t, p, a, b, cas=1;
    while(scanf("%d %d", &row, &col)==2)
    {
        getchar();
        while(!st.empty()) st.pop();
        for( i=0; i<row; i++)
        {
            for( j=0; j<col; j++)
            {
                visited[i][j]=0;
                scanf("%c", &arr[i][j]);
            }
            getchar();
        }
        for( i=0; i<row; i++)
        {
            for( j=0; j<col; j++)
            {
                if(visited[i][j]==0 && arr[i][j]=='.')
                {
                    st.push(make_pair(i, j));//stack
                    dfs(i, j);//recursion
                }
            }
        }
//        for( i=1; i<=n; i++)
//        {
//            if(visited[i]==0)
//            {
//                st.push(i);
//                dfs(i);//visited[i]=0 means white
//            }
//        }
    }

    return 0;
}
/*
6 7
1 2
1 3
2 4
2 5
4 6
4 3
6 5
*/
