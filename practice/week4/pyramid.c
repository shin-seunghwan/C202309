#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)"); //사용자에게 입력 받기
	scanf_s("%d", &floor); //입력 받은 값을 floor 에 저장

	for(int i = 0; i < floor; i++) {
		for(int j = 0; j < floor - 1 - i; j++) {
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}