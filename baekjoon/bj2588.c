#include<stdio.h>
int main(){
    int f,s;
    scanf("%d %d",&f,&s);
    printf("%d\n%d\n%d\n%d",f*(s-s/10*10),f*(s/10-s/100*10),f*(s/100),f*s);
}