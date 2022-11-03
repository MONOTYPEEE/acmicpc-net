#include<stdio.h>
int main() {
	int hr, mt;
	scanf("%d %d", &hr, &mt);
	mt -= 45;
	if (mt < 0){
		hr--;
		mt += 60;
	}
	if (hr == -1) hr = 23;
	printf("%d %d", hr, mt);
}