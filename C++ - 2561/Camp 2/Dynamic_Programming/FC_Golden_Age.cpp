/*
	Author  : Phumipat C.
	School  : RYW
	Language: C++
*/
#include<bits/stdc++.h>
using namespace std;
int tree[5010],dp[5010][110],n;
int golden(int now,int k){
    if(now>n)           return 0;
    if(k == 0)          return 0;
    if(dp[now][k]!=-1)  return dp[now][k];
    int maxx = -1;
    for(int i=0;i<k;i++)
        maxx = max(maxx,golden(2*now,i)+golden((2*now)+1,k-i-1));
    return dp[now][k] = maxx+tree[now];
}
int main(){
    int k,ans = -1;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&tree[i]);
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++)
        ans = max(ans,golden(i,k));
    printf("%d\n",ans);
	return 0;
}
