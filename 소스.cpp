// 조건 연산자 프로그램
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("첫번째 수=");
	scanf_s("%d", &x);
	printf("두번째 수=");
	scanf_s("%d", &y);
	printf("큰 수=%d \n", (x > y) ? x : y);
	printf("작은 수=%d \n", (x < y) ? x : y);

	return 0;
}