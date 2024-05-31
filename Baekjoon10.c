// 백준 10989 - 수 정렬하기 3
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int N, val;
	int i, j;
	// 숫자들 각각의 개수의 배열
	int num_arr[10001] = { 0, };
	scanf("%d", &N);
	
	// 숫자들의 개수를 센다.
	for (i = 0; i < N; i++) {
		scanf("%d", &val);
		num_arr[val] += 1;
	}

	// 개수만큼 해당 수를 출력한다.
	for (i = 1; i < 10001; i++) {
		for (j = 1; j <= num_arr[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}