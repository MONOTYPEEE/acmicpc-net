#include <stdio.h>

int main() {
  long long aY,bY;
  scanf("%lld %lld",&aY,&bY);
  if(aY-bY<0) printf("%lld",(aY-bY)*-1);
  else printf("%lld",aY-bY);
}