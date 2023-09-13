#include <stdio.h>

int main(void) {
	float pi1 = 3.141592f;
	printf("%.5f\n", pi1);
	//n은 출력할 소수점 이하 자릿수

	double pi2 = 3.141;
	printf("%.3lf", pi2);
	return 0;
}