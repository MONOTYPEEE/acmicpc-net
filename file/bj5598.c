#include <stdio.h>
int chec(char po){
  if(po=='A'||po=='B'||po=='C'){
    return po+23;
  }
  else return po-3;
}
int main() {
  char pro[1080];
  int ii=0;
  scanf("%s",pro);
  while(pro[ii]!='\0'){
    printf("%c",chec(pro[ii]));
    ii+=1;
  }
}