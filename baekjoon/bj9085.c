#include <stdio.h>

int main()
{
    int nOS, nON, sumMmMmM,temp;
    scanf("%d",&nOS);
    for(int vv=1;vv<=nOS;vv++){
        scanf("%d",&nON);
        sumMmMmM=0;
        for(int cic=1;cic<=nON;cic++){
            scanf("%d",&temp);
            sumMmMmM+=temp;
        }
        printf("%d\n",sumMmMmM);
    }
}