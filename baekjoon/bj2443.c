#include<stdio.h>
int main(){
    int inpt;
    scanf("%d",&inpt);
    for(int s=inpt-1;s>=0;s--){
        for(int v=1;v<=inpt-s-1;v++){
            printf(" ");
        }
        for(int n=0;n<=s;n++){
            printf("*");
        }
        for(int r=1;r<=s;r++){
            printf("*");
        }
        printf("\n");
    }
}