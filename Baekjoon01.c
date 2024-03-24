// 백준 1018번 - 체스판 다시 칠하기
#include <stdio.h>
#include <limits.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int M, N;
	int ans = INT_MAX;
	int tmp = 0;
	int x = 0, y = 0;
	char board[50][50];
	char w_board[8][8];
	char b_board[8][8];

	// 정적인 시작점
	int x_start = 0, y_start = 0;

	// 원본 보드
	scanf("%d%d", &M, &N);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf(" %c", &board[i][j]);
		}
	}

	// 대조군1 - 하얀색으로 시작
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// 세로줄이 짝수번째
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					w_board[i][j] = 'W';
				}
				else {
					w_board[i][j] = 'B';
				}
			}
			// 세로줄이 홀수번째
			else {
				if (j % 2 == 0) {
					w_board[i][j] = 'B';
				}
				else {
					w_board[i][j] = 'W';
				}
			}
		}
	}
	// 대조군2 - 까만색으로 시작
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// 세로줄이 짝수번째
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					b_board[i][j] = 'B';
				}
				else {
					b_board[i][j] = 'W';
				}
			}
			// 세로줄이 홀수번째
			else {
				if (j % 2 == 0) {
					b_board[i][j] = 'W';
				}
				else {
					b_board[i][j] = 'B';
				}
			}
		}
	}
	
	// 대조, 탐색
	while (1) {
		// 첫번째 대조군과 대조 - 첫번째가 하얀색인 보드
		for (int i = y; i < y + 8; i++) {
			for (int j = x; j < x + 8; j++) {
				if (board[i][j] != w_board[y_start][x_start]) {
					tmp++;
				}
				x_start++;
			}
			x_start = 0;
			y_start++;
		}
		// 최솟값 비교
		if (tmp < ans) {
			ans = tmp;
		}
		tmp = 0;
		x_start = 0, y_start = 0;
		// 두번째 대조군과 대조 - 첫번째가 까만색인 보드
		for (int i = y; i < y + 8; i++) {
			for (int j = x; j < x + 8; j++) {
				if (board[i][j] != b_board[y_start][x_start]) {
					tmp++;
				}
				x_start++;
			}
			x_start = 0;
			y_start++;
		}
		// 최솟값 비교
		if (tmp < ans) {
			ans = tmp;
		}
		tmp = 0;
		x_start = 0, y_start = 0;
		// 종료 조건 확인
		if (x < N - 8) {
			x++;
		}
		else {
			if (y == M - 8) {
				break;
			}
			else {
				y++;
				x = 0;
			}
		}
	}
	// 결과 출력
	printf("%d", ans);
	return 0;
}