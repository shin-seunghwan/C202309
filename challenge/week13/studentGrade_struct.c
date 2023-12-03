#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//����ü�� �̿��� �л��� �̸��� ������ ����
typedef struct {
	char name[50];
	int score;
}Student;


//classifyStudents��� �Լ��� �̿��� ������ �з��ϴ� �Լ�
void classifyStudents(Student *students, int count, char targetGrade) {
	printf("�л� ���� �з� : \n");
	char grade = ' ';

	//�л� ����ŭ �ݺ��ϸ鼭 �л����� ������ ���� ������ �ο�
	for (int i = 0; i < count; i++) {
		if (students[i].score >= 90) {
			grade = 'A';
		}
		else if (students[i].score >= 80) {
			grade = 'B';
		}
		else if (students[i].score >= 70) {
			grade = 'C';
		}
		else if (students[i].score >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		//Ÿ�� ������ �л��� ������ ���� ��� ���
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", students[i].score, targetGrade);
		}
	}
}

//�л� ������ ���� ���ϴ� �Լ��� �ݺ����� �̿��� ��� ���Ѵ�
int sumScores(Student* students, int count) {
	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += students[i].score;
	}
	return sum;
}

//��� ���� �л��� ���� �� �л��� ���� ������ ����� ���Ѵ�.
double averageScores(Student* students, int count) {
	int sum = sumScores(students, count);
	double average = (double)sum / count;
	return average;
}

//�ʱ� ������ �������� ������ �ű��.
void printRanks(Student* students, int count) {
	int* ranks = malloc(sizeof(int) * count); //count ������ŭ�� int ������ ������ �� �ִ� �޸� ������ �Ҵ��ϰ�, �� ���� �ּҸ� ranks �����Ϳ� ����
	for (int i = 0; i < count; i++) {
		ranks[i] = 1; //�ʱ� ������ 1�� ����
		for (int j = 0; j < count; j++) {
			if (students[j].score > students[i].score) {
				ranks[i]++; //���� ��Һ��� ū ��Ұ� ������ ���� ����
			}
		}
		printf("%d �л��� ������ %d �Դϴ�. \n", i + 1, ranks[i]);
	}
	free(ranks); //�Ҵ�� �޸𸮸� ������
}


int main() {
	int count;
	printf("�л� ���� �Է��ϼ���: ");
	scanf_s("%d", &count);
	getchar();// ���� �����

	Student* students = malloc(sizeof(Student) * count);

	for (int i = 0; i < count; i++) {
		printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
		fgets(students[i].name, 50, stdin); //����� �Է��� �ޱ� ���� �Լ� fgets ���
		students[i].name[strcspn(students[i].name, "\n")] = 0; 

		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &students[i].score);
		getchar(); // ���� �����
	}



	char target; //���� ����
	//�Է� �ް� ���
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	//������ �ߴ� �Լ� ����
	classifyStudents(students, count, target);

	int sum = sumScores(students, count);
	double average = averageScores(students, count);
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf �Դϴ�. \n", sum, average);

	printRanks(students, count);

	return 0;
}