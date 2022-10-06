#include<stdio.h>
int main() {
	int nowH, nowM, addM, split;
	scanf("%d %d %d", &nowH, &nowM, &addM);
	nowM += addM;
	if (nowM >= 60) {
		split = nowM / 60;
		nowM -= split * 60;
		nowH += split;
	}
	if (nowH >= 24) nowH -= 24;
	printf("%d %d", nowH, nowM);
}