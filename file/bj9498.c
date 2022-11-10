#include <stdio.h>
int jeom_su;
int main() {
    scanf("%d",&jeom_su);
  if(jeom_su>=90) printf("A");
  else if(jeom_su<=89&&jeom_su>=80) printf("B");
  else if(jeom_su<=79&&jeom_su>=70) printf("C");
  else if(jeom_su<=69&&jeom_su>=60) printf("D");
  else printf("F");
}
  