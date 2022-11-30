#include<stdio.h>
int main(){
    int nmofRv,hstX,lstX,rvs[51];
    scanf("%d %d %d", &nmofRv, &lstX, &hstX);
    for(int i=0;i<=nmofRv-1;i++){
        scanf(" %d",&rvs[i]);
    }
    int tempSum=0;
    for(int t=lstX;t<=nmofRv-hstX-1;t++){
        tempSum+=rvs[t];
    }
    printf("%f",(double)tempSum/nmofRv-lstX-hstX);
}