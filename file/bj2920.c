#include<stdio.h>
int main() {
	int ray[10];
	for (int i = 0; i <= 7; i++) {
		scanf("%d", &ray[i]);
	}
	if (ray[0] == 1 && ray[1] == 2 && ray[2] == 3 && ray[3] == 4 && ray[4] == 5 && ray[5] == 6 && ray[6] == 7 && ray[7] == 8) printf("ascending");
	else if (ray[0] == 8 && ray[1] == 7 && ray[2] == 6 && ray[3] == 5 && ray[4] == 4 && ray[5] == 3 && ray[6] == 2 && ray[7] == 1) printf("descending");
	else printf("mixed");
}