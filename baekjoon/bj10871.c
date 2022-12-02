#include <stdio.h>
int main() {
  int non,n,node;
  scanf("%d %d",&non,&node);
  for(int fi=0;fi<=non-1;fi++){
    scanf("%d",&n);
    if(node>n) printf("%d ",n);
  }
}
  