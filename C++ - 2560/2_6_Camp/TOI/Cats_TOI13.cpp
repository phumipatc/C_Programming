/*
    Task    :
    Author  : Phumipat C.
    School  : RYW
    Language: C++
*/
#include<bits/stdc++.h>
using namespace std;
int a[2000005],b[2000005],c[2000005];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
        b[i] = b[i*2];
    int l = 0,r = n/2;
    while(l<r){
        int mid = (l+r)/2,idx = 0,ch = 0;
        for(int i=1;i<=n;i++){
            if(a[i]>b[mid]){
                idx++;
                c[idx] = a[i];
            }
        }
        for(int i=1;i<idx;i++){
            if(c[i]!=c[i+1]){
                ch = 1;
                break;
            }else
                i++;
        }
        if(ch)  l = mid+1;
        else    r = mid;
    }
    printf("%d\n",b[r]);
    return 0;
}
