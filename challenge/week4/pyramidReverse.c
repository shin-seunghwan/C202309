#include <stdio.h>

int main()
{
	int floor; // ���� ����
	printf("������ �װڽ��ϱ�? (5 ~ 100)");
	scanf_s("%d", &floor);
	//�Է� �ް� ����

	for (int i = floor; i > 0; i--) {
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}
		//���� ���� �� �ʱ�ȭ
		//floor - i ��ŭ s�� ����Ѵ�
		//0, 1, 2 ,,,, ��ŭ ��µǴ� s�� ���� ����

		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		// ���� ���� �� �ʱ�ȭ
		// �Ƕ�̵� ����� ���� *�� Ȧ�� ��(i * 2 - 1)�� ����
		//k++ �� �ϸ鼭 ���� *�� ������ ���ҽ�Ų��
		printf("\n");
	}
	//�Էµ� �� (floor)��ŭ �ݺ�
	return 0;
}