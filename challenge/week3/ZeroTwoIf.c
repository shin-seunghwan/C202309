#include <stdio.h>

int main()
{
	int num = 0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);
	//변수 선언 및 초기화 하고 문장을 출력하여 입력을 받아 num에 넣는다.

	if (num == 0) {
		printf("zero");
	}
	else if (num == 1) {
		printf("one");
	}
	else if (num == 2) {
		printf("two");
	}
	else {
		printf("not 0 ~ 2");
	}
	//num이 0,1,2에 해당하면 그에 맞는 단어 출력
	//그 외의 것들을 not 0 ~ 2  출력

	return 0;
}