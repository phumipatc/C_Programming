/*
	Author  : Phumipat C.
	School  : RYW
	Language: C++
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL fact[13];
int main(){
	ios_base::sync_with_stdio(0);	cin.tie(0),cout.tie(0);
	LL n,k,idx,sum = 0;
	fact[1] = fact[0] = 1;
	for(LL i=2;i<=11;i++)
		fact[i] = fact[i-1]*i;
	cin >> n >> k;
	k--;
	return 0;
}