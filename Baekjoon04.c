// ���� 1436�� - ��ȭ���� ��
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int N;
	scanf("%d", &N);
	// ��ȭ�� 666���� �����̴�.
	int flag = 665, chapter = 0;
	// 666�� �� ���ڸ� �������ش�, ������ ��°����� ���δ�.
	int ans = 0;
	// ���ڿ��� ����ȯ�� ������ ��ƵѰ�
	char str_buf[10000];
	// ���Ʈ���� ������� N��°�� �ɶ����� ���鼭 666�� �� ���� ã�´�.
	while (chapter < N) {
		// ���� ���ڸ� ���ڿ��� ����ȯ�Ͽ� str_buf�� �����صд�.
		snprintf(str_buf, 10000, "%d", flag);
		// str_buf�� �ִ� ���ڿ��� 666�� �����Ѵٸ�, chapter�� �ϳ� �ø���, ans�� �����Ѵ�.
		if (strstr(str_buf, "666") != NULL) {
			ans = flag;
			chapter += 1;
		}
		flag += 1;
	}
	printf("%d", ans);
	return 0;
}