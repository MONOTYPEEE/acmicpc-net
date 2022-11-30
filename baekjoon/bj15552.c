#include<stdio.h>
int main() {
    int aa, bb, c;
    scanf("%d", &c);
    for (int fi = 1; fi <= c; fi++) {
        scanf("%d %d", &aa, &bb);
        printf("%d\n", aa + bb);
    }
}