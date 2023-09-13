#include <stdio.h>

int main(void) {
	int input;
	//int 타입의 input(변수)을 만들어놓기
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	//서식 지정자와 해당하는 변수 앞에 &붙여야 한다! 
	printf("입력값 : %d\n", input);
	return 0;
}