#include <stdio.h>

int main()
{
	int i = 0; // ���� ����
	while (i < 10) {
		i++; //i�� 1 �� ����
		if (i % 2 == 0) {
			continue;
		}printf("hello world %d\n", i);
		//Ȧ���̸� ����ϰ� ¦���� ��� �ݺ��� ó������ ���ư���.
	}
}
