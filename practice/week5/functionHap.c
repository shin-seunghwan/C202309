#include <stdio.h>

int hapf(int value);

int main()
{
	printf("1����		10������ ���� %d\n", hapf(10));
	printf("1����	100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
	// ���� ������� ���
	return 0;
}

int hapf(int value) //hapf()�� �� ���� value�� �ִ´�
{
	int i = 0;
	int hap = 0;
	//���� ���� �� �ʱ�ȭ

	while (i < value)
	{
		i = i + 1;
		hap = hap + i;
	}
	//i�� 0���� 1�� �߰��Ǹ鼭 hap�� ���� i��ŭ �������� �ݺ���
	return hap;
	// hap ��ȯ
}