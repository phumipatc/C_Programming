/*
    TASK:
    AUTHOR: Boss
    SCHOOL:RYW
    LANG: C
*/
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m){
            printf("%d",(2*m)-1);
    }else if(n<m){
            printf("%d",2*(n-1));
    }else
        printf("%d",2*(m-1));
return 0;
}
