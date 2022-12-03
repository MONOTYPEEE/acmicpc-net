#include <stdio.h>
int main() {
  int width, height,peop, gF,gW,notc;
  scanf("%d",&notc);
  for(int fi=1;fi<=notc;fi++){
  scanf("%d %d %d",&height,&width,&peop);
  if(peop % height == 0) printf("%d%02d\n", height, peop / height);
  else printf("%d%02d\n", peop % height, peop / height + 1);
}
  }