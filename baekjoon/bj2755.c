#include<stdio.h>
float hakJumm(char ss[]) {
    if (ss[0] == 'A') {
        if (ss[1] == '+') return 4.3;
        else if (ss[1] == '0') return 4.0;
        else if (ss[1] == '-') return 3.7;
    }
    else if (ss[0] == 'B') {
        if (ss[1] == '+') return 3.3;
        else if (ss[1] == '0') return 3.0;
        else if (ss[1] == '-') return 2.7;
    }
    else if (ss[0] == 'C') {
        if (ss[1] == '+') return 2.3;
        else if (ss[1] == '0') return 2.0;
        else if (ss[1] == '-') return 1.7;
    }
    else if (ss[0] == 'D') {
        if (ss[1] == '+') return 1.3;
        else if (ss[1] == '0') return 1.0;
        else if (ss[1] == '-') return 0.7;
    }
    else if (ss[0] == 'F') return 0;
}
int main()
{
    int NoC, poinTemp,chongBang=0;
    float sumP = 0;
    char abcd[4], eee[100];
    scanf("%d", &NoC);
    for (int i = 1; i <= NoC; i++) {
        scanf("%s %d %s", eee, &poinTemp, abcd);
        sumP += poinTemp * hakJumm(abcd);
        chongBang += poinTemp;
    }
    printf("%.2f", (float)sumP / chongBang);
}