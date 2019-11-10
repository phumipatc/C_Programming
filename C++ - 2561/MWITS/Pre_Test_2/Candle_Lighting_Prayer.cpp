/*
	Author  : Phumipat C.
	School  : RYW
	Language: C++
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j;
};
A now;
queue<A > que;
char a[2010][2010];
int dir[2][8] = {{-1,-1,-1,0,1,1,1,0},{-1,0,1,1,1,0,-1,-1}};
int main(){
    int n,m,ni,nj,countt = 0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf(" %c",&a[i][j]);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j] == '0')  continue;
            a[i][j] = '0';
            que.push({i,j});
            countt++;
            while(!que.empty()){
                now = que.front();
                que.pop();
                for(int k=0;k<8;k++){
                    ni = now.i+dir[0][k];
                    nj = now.j+dir[1][k];
                    if(ni<1 || nj<1 || ni>n || nj>m)    continue;
                    if(a[ni][nj] == '0')                continue;
                    a[ni][nj] = '0';
                    que.push({ni,nj});
                }
            }
        }
    }
    printf("%d\n",countt);
	return 0;
}
