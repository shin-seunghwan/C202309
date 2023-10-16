#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2 // 상수 선언

char names[NUMPEOPLE][10];
char cities[NUMCITY][10]; // 배열 선언 

void calculateTravelDays(); // 함수 선언

int main() {
	//사용자에게 도시명 입력 받는다.
	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	//사용자에게 여행자 이름 입력 받는다.
	printf("%d개의 여행자 이름을 차례대로 입력해주세요.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}
	//함수 호출
	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE]; //배열 선언
	//반복문을 통해 각 여행자가 도시에서 몇 일을 보냈는지 입력 받는다.
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	// 각 도시별 총 일 수 계산
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		//평균 일 수 계산
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDays);
	}
}