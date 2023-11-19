#include <stdio.h>
#define STUDENTS 5

//scores[i] 대신 *(scores + i)를 사용하여 배열의 i번째 요소를 나타낸다.

//classifyStudents라는 함수를 이용해 배열과 변수 선언
void classifyStudents(int *scores, char targetGrade) {
	printf("학생 성적 분류 : \n");
	char grade = ' ';

	//학생 수만큼 반복하면서 학생들의 점수에 따라 점수를 부여
	for (int i = 0; i < STUDENTS; i++) {
		if (*(scores + i) >= 90) {
			grade = 'A';
		}
		else if (*(scores + i) >= 80) {
			grade = 'B';
		}
		else if (*(scores+i) >= 70) {
			grade = 'C';
		}
		else if (*(scores + i) >= 60) {
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

//학생 성적의 합을 구하는 함수로 반복문을 이용해 모두 더한다
int sumScores(int *scores) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(scores + i);
	}
	return sum;
}

//모두 더한 학생의 값과 그 학생의 수로 나누어 평균을 구한다.
double averageScores(int *scores) {
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS;
	return average;
}

//초기 순위를 바탕으로 순위를 매긴다.
void printRanks(int *scores) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; //초기 순위를 1로 설정
		for (int j = 0; j < STUDENTS; j++) {
			if (*(scores + j) > *(scores + i)) {
				ranks[i]++; //현재 요소보다 큰 요소가 있으면 순위 증가
			}
		}
		printf("%d 학생의 순위는 %d 입니다. \n", i+1, ranks[i]);
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
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf 입니다. \n", sum, average);

	printRanks(scores);

	return 0;
}