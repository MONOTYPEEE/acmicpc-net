#include<stdio.h>
int main(){
    int i[2];
    scanf("%d %d",&i[0],&i[1]);
    printf("%.13Lf",(long double)i[0]/i[1]);
}