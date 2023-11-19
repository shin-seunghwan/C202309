#include <stdio.h>
#define STUDENTS 5

//classifyStudents��� �Լ��� �̿��� �迭�� ���� ����
void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з� : \n");
	char grade = ' ';

	//�л� ����ŭ �ݺ��ϸ鼭 �л����� ������ ���� ������ �ο�
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 790) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
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

int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

double averageScores(int scores[]) {
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS;
	return average;
}

void printRanks(int scores[]) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; //�ʱ� ������ 1�� ����
		for (int j = 0; j < STUDENTS; j++) {
			if(scores[j] > scores[i]) {
				ranks[i]++; //���� ��Һ��� ū ��Ұ� ������ ���� ����
			}
		}
		printf("%d �л��� ������ %d �Դϴ�. \n", i, ranks[i]);
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
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf �Դϴ�. \n", sum, average);

	printRanks(scores);

	return 0;
}