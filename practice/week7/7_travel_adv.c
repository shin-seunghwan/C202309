#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2 // 상수 선언

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

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
	void calculateTravelDays();

	return 0;
}
// 함수 선언 및 배열선언
void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];
	//반복문을 통해 각 여행자가 도시에서 몇 일을 보냈는지 입력 받는다.
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// 각 도시별 총 일 수 계산
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수 : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}//함수 출력
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
	printf("평균일 기준으로 가장 인기 있었던 도시는 %s 입니다. (평균 머문일 :  %.2f)\n", cities[maxDayindex], maxDay);
}
