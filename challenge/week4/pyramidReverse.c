#include <stdio.h>

int main()
{
	int floor; // 변수 선언
	printf("몇층을 쌓겠습니까? (5 ~ 100)");
	scanf_s("%d", &floor);
	//입력 받고 저장

	for (int i = floor; i > 0; i--) {
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}
		//변수 선언 및 초기화
		//floor - i 만큼 s를 출력한다
		//0, 1, 2 ,,,, 만큼 출력되는 s의 개수 증가

		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		// 변수 선언 및 초기화
		// 피라미드 모양을 위해 *를 홀수 개(i * 2 - 1)로 변형
		//k++ 로 하면서 점차 *의 개수를 감소시킨다
		printf("\n");
	}
	//입력된 수 (floor)만큼 반복
	return 0;
}