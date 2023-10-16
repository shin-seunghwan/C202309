#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2 // ��� ����

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

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
	void calculateTravelDays();

	return 0;
}
// �Լ� ���� �� �迭����
void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];
	//�ݺ����� ���� �� �����ڰ� ���ÿ��� �� ���� ���´��� �Է� �޴´�.
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// �� ���ú� �� �� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� �� : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}//�Լ� ���
	printFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	return totalDays;
}

double getAverage(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averageDays = (double)totalDays / length;
	return averageDays;
}

void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayindex = 0;
	for (int i = 0; i < length; i++) {
		maxDay = dayArray[i];
		maxDayindex = i;
	}
	printf("����� �������� ���� �α� �־��� ���ô� %s �Դϴ�. (��� �ӹ��� :  %.2f)\n", cities[maxDayindex], maxDay);
}
