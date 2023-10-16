#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2 // ��� ����

char names[NUMPEOPLE][10];
char cities[NUMCITY][10]; // �迭 ���� 

void calculateTravelDays(); // �Լ� ����

int main() {
	//����ڿ��� ���ø� �Է� �޴´�.
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	//����ڿ��� ������ �̸� �Է� �޴´�.
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}
	//�Լ� ȣ��
	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE]; //�迭 ����
	//�ݺ����� ���� �� �����ڰ� ���ÿ��� �� ���� ���´��� �Է� �޴´�.
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	// �� ���ú� �� �� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		//��� �� �� ���
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);
	}
}