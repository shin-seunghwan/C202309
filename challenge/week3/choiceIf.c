#include <stdio.h>

int main()
{
	int choice;

	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice);
	//��� �ϰ� �Է��� �޴´� �׸��� �� �Է� ���� ���� choice�� �ִ´�.

	if (choice == 1) {
		printf("������ �����մϴ�.\n");
	}
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.\n");
	}
	else if (choice == 3) {
		printf("�����մϴ�.\n");
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	//choice�� ���� 1,2,3�̶�� �ش��ϴ� ������ ��� �ϰ� 
	//�̿��ǰ��̶�� else�̹Ƿ� �׿� �ش��ϴ� ���� ���

	return 0;
}