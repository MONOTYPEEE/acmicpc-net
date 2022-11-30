#include<stdio.h>
int main(){
    int le,sum=0;
    scanf("%d",&le);
    for(int i=1;i<=le;i++){
        int e;
        scanf("%1d",&e);
        sum+=e;
    }
    printf("%d",sum);
}