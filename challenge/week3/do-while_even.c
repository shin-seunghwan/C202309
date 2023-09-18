#include <stdio.h>

int main()
{
	int i = 0; // 변수 선언
	do {
		i++; // i가 1씩 증가
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world %d\n", i);
		//홀수이면 출력하고 짝수일 경우 반복문 처음으로 돌아간다.
	} while (i < 10);
	// 위의 조건에 따라 i를 0부터 9까지 반복한다.
}