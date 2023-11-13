#include <stdio.h>
#define STUDENTS 5



//classifyStudents��� �Լ��� �̿��� �迭�� ���� ����
void classifyStudents(int* scores, char targetGrade) {
	printf("�л� ���� �з� : \n");
	char grade = ' ';
	int* s = scores;
	//�л� ����ŭ �ݺ��ϸ鼭 �л����� ������ ���� ������ �ο�
	for (int i = 0; i < STUDENTS; i++) {
		if (*s >= 90) {
			grade = 'A';
		}
		else if (*s >= 80) {
			grade = 'B';
		}
		else if (*s >= 790) {
			grade = 'C';
		}
		else if (*s >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		//Ÿ�� ������ �л��� ������ ���� ��� ���
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int sumScores(int* scores)
{
	int sum = 0;
	int* s = scores;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *s;
	}
	return sum;
}

double averageScores(int* scores)
{
	double sum = sumScores(scores);
	double avreage = (double)sum / (double)STUDENTS;
	return avreage;
}

void printRanks(int* scores)
{
	int ranks[STUDENTS];
	int* s = scores;
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (*s > *s) {
				ranks[i]++;
			}
		}
		printf("%d �л��� ������ %d�Դϴ�. \n", i, ranks[i]);
	}
}

int main() {
	int scores[STUDENTS]; // �迭 ����
	
	//�迭 ����ŭ �ݺ��Ͽ� �л��� ������ �Է¹޴´�.
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();// ���� �����

	char target; //���� ����
	//�Է� �ް� ���
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	//������ �ߴ� �Լ� ����
	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�. \n", sum, average);

	printRanks(scores);

	return 0;
}

