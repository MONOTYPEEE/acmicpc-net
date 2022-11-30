#include <stdio.h>
int t;
int main() {
    scanf("%d",&t);
  if(t%400==0||(t%4==0 && t%100!=0)){
    printf("1");
  }
  else printf("0");
}