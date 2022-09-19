#include <stdio.h>

int main() {
  int nft, yms=0, mms=0;
  scanf("%d", &nft);
  for(int i=1;i<=nft;i++){
    int v=0;
    scanf(" %d", &v);
    yms+=v/30*10+10;
    mms+=v/60*15+15;
  }

  if(yms<mms){
    printf("Y %d",yms);
  }else if(yms>mms){
    printf("M %d",mms);
  }else if(yms==mms){
    printf("Y M %d",mms);
  }
}
  