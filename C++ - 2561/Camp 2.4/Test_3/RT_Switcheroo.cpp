/*
	Author  : Phumipat C.
	School  : RYW
	Language: C++
*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int main(){
    int q,n,ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        ans = 0;
        for(int i=1;i<=2*n;i++)
            for(int j=1;j<=2*n;j++)
                scanf("%d",&a[i][j]);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                ans+=max(a[i][j],max(a[i][n+n-j+1],max(a[n+n-i+1][j],a[n+n-i+1][n+n-j+1])));
        printf("%d\n",ans);
    }
	return 0;
}