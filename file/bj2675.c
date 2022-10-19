#include<stdio.h>
int main() {
	int nOS,rp,v;
	char str[22];
	scanf("%d", &nOS);
	for (int i = 0; i <= nOS - 1; i++) {
		scanf("%d %s", &rp, str);
		v = 0;
		while (str[v] != '\0'){
			for (int f = 1; f <= rp; f++) {
				printf("%c", str[v]);
			}
			v++;
		}
		printf("\n");
	}
}