#include <stdio.h>
#include <string.h>
int main(){
  char string[108];
  scanf("%s",string);
  int los = strlen(string),cnt[27];
  for(int zi=0;zi<=26;zi++){
    cnt[zi]=-1;
  }
  
  for(int fi=0;fi<=los-1;fi++){
    if(cnt[string[fi]-97] == -1){
      cnt[string[fi]-97] = fi;
    }
  }

  for(int li=0;li<=25;li++){
    printf("%d ",cnt[li]);
  }
}