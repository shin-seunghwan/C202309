#include <stdio.h>

int main() {
	int x;
	int y;
	int z;
	//자료형 변수 선언
	x = 1;
	y = 2;
	//변수 초기화
	z = x + y;
	//산술 연산자를 이용해 덧셈을 진행
	printf("%d", z);
	//int 이니까 그에 해당하는 서식 지정자 사용
	return 0;
}