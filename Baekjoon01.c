// ���� 1018�� - ü���� �ٽ� ĥ�ϱ�
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

	// ������ ������
	int x_start = 0, y_start = 0;

	// ���� ����
	scanf("%d%d", &M, &N);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf(" %c", &board[i][j]);
		}
	}

	// ������1 - �Ͼ������ ����
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// �������� ¦����°
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					w_board[i][j] = 'W';
				}
				else {
					w_board[i][j] = 'B';
				}
			}
			// �������� Ȧ����°
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
	// ������2 - ������� ����
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// �������� ¦����°
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					b_board[i][j] = 'B';
				}
				else {
					b_board[i][j] = 'W';
				}
			}
			// �������� Ȧ����°
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
	
	// ����, Ž��
	while (1) {
		// ù��° �������� ���� - ù��°�� �Ͼ���� ����
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
		// �ּڰ� ��
		if (tmp < ans) {
			ans = tmp;
		}
		tmp = 0;
		x_start = 0, y_start = 0;
		// �ι�° �������� ���� - ù��°�� ����� ����
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
		// �ּڰ� ��
		if (tmp < ans) {
			ans = tmp;
		}
		tmp = 0;
		x_start = 0, y_start = 0;
		// ���� ���� Ȯ��
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
	// ��� ���
	printf("%d", ans);
	return 0;
}