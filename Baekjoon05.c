// 백준 2839 - 설탕 배달
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int N;
	scanf("%d", &N);
	int ans = 0;
	while (N > 0) {
		if (N % 5 == 0) {
			N -= 5;
			ans += 1;
		}
		else {
			N -= 3;
			ans += 1;
		}
	}
	// 0이 아닐 경우
	if (N != 0) ans = -1;
	printf("%d", ans);
	return 0;
}
