#include <stdio.h>
#define STUDENTS 5



//classifyStudents라는 함수를 이용해 배열과 변수 선언
void classifyStudents(int* scores, char targetGrade) {
	printf("학생 성적 분류 : \n");
	char grade = ' ';
	int* s = scores;
	//학생 수만큼 반복하면서 학생들의 점수에 따라 점수를 부여
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
		//타겟 점수와 학생의 점수가 같을 경우 출력
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
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
		printf("%d 학생의 순위는 %d입니다. \n", i, ranks[i]);
	}
}

int main() {
	int scores[STUDENTS]; // 배열 선언
	
	//배열 수만큼 반복하여 학생의 성적을 입력받는다.
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();// 버퍼 지우기

	char target; //변수 선언
	//입력 받고 출력
	printf("특정 점수 (A,B,C,D,F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	//위에서 했던 함수 선언
	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다. \n", sum, average);

	printRanks(scores);

	return 0;
}

