#include<stdio.h>
int main(){
    int max=0,now=0;
    for(int i=0;i<=3;i++){
        int in,ot;
        scanf("%d %d", &ot, &in);
        now=now+in;
        now=now-ot;
        if(now>max){
            max=now;
        }
    }
    printf("%d",max);
}