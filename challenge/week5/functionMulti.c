#include <stdio.h>

long multiF(long value);

int main()
{
	printf("1����		2������ ���� %ld\n", multiF(2));
	printf("1����	3������ ���� %ld\n", multiF(3));
	printf("1���� 5������ ���� %ld\n", multiF(5));
	// ���� ������� ���
	return 0;
}

long multiF(long value) ///hapf()�� �� ���� value�� �ִ´�
{
	long i;
	long multi = 1;
	//���� ���� �� �ʱ�ȭ

	for (i = 1; i <= value; i = i + 1)
	{
		multi = multi * i;
	}
	// i�� 1 �� �� 
	return multi;
}