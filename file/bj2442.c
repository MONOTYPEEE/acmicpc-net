#include<stdio.h>
int main(){
    int inpt;
    scanf("%d",&inpt);
    for(int i=0;i<=inpt-1;i++){
        for(int v=1;v<=inpt-i-1;v++){
            printf(" ");
        }
        for(int n=0;n<=i;n++){
            printf("*");
        }
        for(int r=1;r<=i;r++){
            printf("*");
        }
        printf("\n");
    }
}