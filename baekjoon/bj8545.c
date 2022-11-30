#include<stdio.h>
int main() {
	char f[5];
	scanf("%s", f);
	for (int vf = 2; vf >= 0; vf--) {
		printf("%c", f[vf]);
	}
}