#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>1;j--){
            printf("+");
        }
        for(j=1;j<=n-i+1;j++){
            printf("0");
        }
        if(i!=n){
            for(j=1;j<=n-i;j++){
                printf("0");
            }
        }
        for(j=i;j>1;j--){
            printf("+");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<i;j++){
            printf("+");
        }
        for(j=i;j<n+1;j++){
            printf("0");
        }
        if(i!=n){
            for(j=i;j<n;j++){
                printf("0");
            }
        }
        for(j=1;j<i;j++){
            printf("+");
        }
        printf("\n");
    }
}
