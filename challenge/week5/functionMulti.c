#include <stdio.h>

long multiF(long value);

void main()
{
	printf("1����		2������ ���� %d\n", multiF(2));
	printf("1����	3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
	// ���� ������� ���
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