// ���� 10989 - �� �����ϱ� 3
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int N, val;
	int i, j;
	// ���ڵ� ������ ������ �迭
	int num_arr[10001] = { 0, };
	scanf("%d", &N);
	
	// ���ڵ��� ������ ����.
	for (i = 0; i < N; i++) {
		scanf("%d", &val);
		num_arr[val] += 1;
	}

	// ������ŭ �ش� ���� ����Ѵ�.
	for (i = 1; i < 10001; i++) {
		for (j = 1; j <= num_arr[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}