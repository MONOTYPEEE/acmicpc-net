#include <stdio.h>
int main(){
    int theA,theB,theC;
    scanf("%d %d %d",&theA,&theB,&theC);
    printf("%d\n%d\n%d\n%d",(theA+theB)%theC,((theA%theC) + (theB%theC))%theC, (theA*theB)%theC, ((theA%theC) * (theB%theC))%theC);
}
