#include <stdio.h>

int main()
{
	int i = 0; // ���� ����
	do {
		i++; // i�� 1�� ����
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world %d\n", i);
		//Ȧ���̸� ����ϰ� ¦���� ��� �ݺ��� ó������ ���ư���.
	} while (i < 10);
	// ���� ���ǿ� ���� i�� 0���� 9���� �ݺ��Ѵ�.
}