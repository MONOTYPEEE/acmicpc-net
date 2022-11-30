#include<stdio.h>
int main(){
    int num[10008],tp,sum;

    while(scanf("%s",&tp)!=0){
        sum=1;
        while (tp)
        {
            if(tp%10==1) sum+=3;
            else if(tp%10==0) sum+=5;
            else sum+=4;
            tp/10;
        }
        printf("%d\n", sum);
    }
}