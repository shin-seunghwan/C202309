#include <stdio.h>

int main()
{
	int i = 0; // 변수 선언
	while (i < 10) {
		i++; //i가 1 씩 증가
		if (i % 2 == 0) {
			continue;
		}printf("hello world %d\n", i);
		//홀수이면 출력하고 짝수일 경우 반복문 처음으로 돌아간다.
	}
}
