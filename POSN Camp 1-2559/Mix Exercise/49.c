/*
    TASK:
    AUTHOR: Phumipat Chaiprasertsud
    SCHOOL:RYW
    LANG: C
*/
#include<stdio.h>
int main(){
    int n,i,j,n1;
    scanf("%d",&n);
    if(n==1){
        printf("#");
        return 0;
    }
    for(i=0;i<(n*4)-3;i++){
        printf("#");
    }
    printf("\n");
    for(i=1;i<=(n*2)-3;i++){
        for(j=0;j<i;j++){
            if(j%2==0){
                printf("#");
            }else{
                printf(".");
            }
        }
        for(j=(n*2)-3;j>=i;j--){
            if(i%2==0){
             printf("#");
            }else{
             printf(".");
            }
        }
        if(i%2==0){
            printf("#");
        }
        else{
            printf(".");
        }
        for(j=(n*2)-3;j>=i;j--){
            if(i%2==0){
             printf("#");
            }else{
             printf(".");
            }
        }
        for(j=0;j<i;j++){
            if((i+j)%2==0){
                printf(".");
            }else{
                printf("#");
            }
        }
        printf("\n");
        }
      for(i=0;i<(n*4)-3;i++){
        if(i%2==0){
            printf("#");
        }else{
            printf(".");
        }
      }
      printf("\n");
      for(i=1;i<=(n*2)-3;i++){
        for(j=(n*2)-3;j>=i-1;j--){
            if(j%2==0){
                printf(".");
            }else{
                printf("#");
            }
        }
        for(j=0;j<i;j++){
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
        for(j=(n*2)-3;j>=i;j--){
            if((i+j)%2==0){
            printf("#");
            }
            else{
            printf(".");
            }
        }
      printf("\n");
    }
    for(i=0;i<(n*4)-3;i++){
        printf("#");
    }
}
