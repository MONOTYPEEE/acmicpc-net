#include<stdio.h>
int main() {
	int smol = 1000000, maxx = -1000000, ct, now;
	scanf("%d", &ct);
	for (int i = 0; i <= ct - 1; i++) {
		scanf("%d", &now);
		if (now < smol) smol = now;
		if (now > maxx) maxx = now;
	}
	printf("%d %d", smol, maxx);
}