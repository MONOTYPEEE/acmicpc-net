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
    for(int i=0;i<=inpt-1;i++){
        for(int v=1;v<=inpt-i-1;v++){
          if(i!=0)
            printf(" ");
        }
        for(int n=0;n<=i;n++){
          if(i!=0)
            printf("*");
        }
        for(int r=1;r<=i;r++){
            printf("*");
        }
      if(i!=0)
        printf("\n");
    }
}