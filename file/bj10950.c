#include<stdio.h>
int main() {
	int a,v,f,s[100];
	scanf("%d", &f);
	for (int i = 0; i <= f-1; i++) {
		scanf("%d %d", &a, &v);
		s[i] = a + v;
	}
	for (int i = 0; i <= f - 1; i++) {
		printf("%d\n", s[i]);
	}
}