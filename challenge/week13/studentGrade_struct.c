#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//구조체를 이용해 학생의 이름과 점수를 저장
typedef struct {
	char name[50];
	int score;
}Student;


//classifyStudents라는 함수를 이용해 성적을 분류하는 함수
void classifyStudents(Student *students, int count, char targetGrade) {
	printf("학생 성적 분류 : \n");
	char grade = ' ';

	//학생 수만큼 반복하면서 학생들의 점수에 따라 점수를 부여
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
		//타겟 점수와 학생의 점수가 같을 경우 출력
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", students[i].score, targetGrade);
		}
	}
}

//학생 성적의 합을 구하는 함수로 반복문을 이용해 모두 더한다
int sumScores(Student* students, int count) {
	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += students[i].score;
	}
	return sum;
}

//모두 더한 학생의 값과 그 학생의 수로 나누어 평균을 구한다.
double averageScores(Student* students, int count) {
	int sum = sumScores(students, count);
	double average = (double)sum / count;
	return average;
}

//초기 순위를 바탕으로 순위를 매긴다.
void printRanks(Student* students, int count) {
	int* ranks = malloc(sizeof(int) * count); //count 개수만큼의 int 변수를 저장할 수 있는 메모리 공간을 할당하고, 그 시작 주소를 ranks 포인터에 저장
	for (int i = 0; i < count; i++) {
		ranks[i] = 1; //초기 순위를 1로 설정
		for (int j = 0; j < count; j++) {
			if (students[j].score > students[i].score) {
				ranks[i]++; //현재 요소보다 큰 요소가 있으면 순위 증가
			}
		}
		printf("%d 학생의 순위는 %d 입니다. \n", i + 1, ranks[i]);
	}
	free(ranks); //할당된 메모리를 해제함
}


int main() {
	int count;
	printf("학생 수를 입력하세요: ");
	scanf_s("%d", &count);
	getchar();// 버퍼 지우기

	Student* students = malloc(sizeof(Student) * count);

	for (int i = 0; i < count; i++) {
		printf("학생 %d의 이름을 입력하세요: ", i + 1);
		fgets(students[i].name, 50, stdin); //사용자 입력을 받기 위한 함수 fgets 사용
		students[i].name[strcspn(students[i].name, "\n")] = 0; 

		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &students[i].score);
		getchar(); // 버퍼 지우기
	}



	char target; //변수 선언
	//입력 받고 출력
	printf("특정 점수 (A,B,C,D,F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	//위에서 했던 함수 선언
	classifyStudents(students, count, target);

	int sum = sumScores(students, count);
	double average = averageScores(students, count);
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf 입니다. \n", sum, average);

	printRanks(students, count);

	return 0;
}