// ���� ������ ���α׷�
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("ù��° ��=");
	scanf_s("%d", &x);
	printf("�ι�° ��=");
	scanf_s("%d", &y);
	printf("ū ��=%d \n", (x > y) ? x : y);
	printf("���� ��=%d \n", (x < y) ? x : y);

	return 0;
}