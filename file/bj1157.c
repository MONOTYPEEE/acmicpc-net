#include <stdio.h>
int charCnt[26]={0};

void printMost(){
  int maxx=-1,idx,com=0;
  
  for(int fi=0;fi<=25;fi++){
    if(charCnt[fi]>=maxx){
        maxx=charCnt[fi];
      idx=fi;
    }
  }
  for(int fi=0;fi<=25;fi++){
    if(maxx==charCnt[fi]) com++;
  }
  if(com>=2){
    printf("?");return;
  }
  printf("%c",'A'+idx);
}

void scanner(char input){
  if(input>='a') charCnt[input-'a']++;
  else charCnt[input-'A']++;
}

int main() {
    char str[1000008];
  int sf=0;
  scanf("%s",str);
  while(str[sf]!='\0'){
    scanner(str[sf]);
    sf++;
  }
  printMost();
}