/*
    TASK:
    AUTHOR: Phumipat Chaiprasertsud
    SCHOOL:RYW
    LANG: C
*/
#include<stdio.h>
int main(){
    int n,i,j,q,a;
    scanf("%d",&q);
    for(a=0;a<q;a++){
        scanf("%d",&n);
        if(n==1){
            printf("#");
            continue;
        }
        for(i=0;i<(n*4)-3;i++){
        printf("#");
    }
    printf("\n");
    for(i=0;i<(n*4)-4;i++){
        printf(".");
    }
    printf("#");
    printf("\n");
    for(i=1;i<=(n*2)-3;i++){
        for(j=0;j<i;j++){
            if(j%2==0){
            printf("#");
            }else{
            printf(".");
            }
        }
        for(j=(n*2)-2;j>i;j--){
            if(i%2==0){
            printf(".");
            }else{
            printf("#");
            }
        }
        for(j=(n*2)-2;j>i;j--){
            if(i%2==0){
            printf(".");
            }else{
            printf("#");
            }
        }
        for(j=0;j<=i;j++){
            if((i+j)%2==0){
            printf("#");
            }else{
            printf(".");
            }
        }
        printf("\n");
    }
    for(i=1;i<=(n*2)-3;i++){
        for(j=(n*2)-2;j>i;j--){
            if(j%2==0){
            printf("#");
            }else{
            printf(".");
            }
        }
        for(j=0;j<=i;j++){
            if(i%2==0){
            printf("#");
            }else{
            printf(".");
            }
        }
        for(j=0;j<i;j++){
            if(i%2==0){
            printf("#");
            }else{
            printf(".");
            }
        }
        for(j=(n*2)-2;j>i;j--){
            if((j+i)%2==0){
            printf(".");
            }else{
            printf("#");
            }
        }
        printf("\n");
    }
    for(i=0;i<(n*4)-3;i++){
        printf("#");
    }
    }
    }
