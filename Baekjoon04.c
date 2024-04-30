// 백준 1436번 - 영화감독 숌
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int N;
	scanf("%d", &N);
	// 영화는 666부터 시작이다.
	int flag = 665, chapter = 0;
	// 666이 들어간 숫자를 저장해준다, 마지막 출력값으로 쓰인다.
	int ans = 0;
	// 문자열로 형변환한 정수를 담아둘곳
	char str_buf[10000];
	// 브루트포스 방식으로 N번째가 될때까지 돌면서 666이 들어간 수를 찾는다.
	while (chapter < N) {
		// 현재 숫자를 문자열로 형변환하여 str_buf에 저장해둔다.
		snprintf(str_buf, 10000, "%d", flag);
		// str_buf에 있는 문자열에 666이 존재한다면, chapter를 하나 올리고, ans에 저장한다.
		if (strstr(str_buf, "666") != NULL) {
			ans = flag;
			chapter += 1;
		}
		flag += 1;
	}
	printf("%d", ans);
	return 0;
}