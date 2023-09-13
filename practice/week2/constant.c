#include <stdio.h>

#define  X  1
#define PI 3.141592
//해당하는 숫자를 정의

int main()
{
	double z;
	//실수형에 해당하는 변수 double 사용 및 변수 선언
	z = X + PI;
	//변수에 상수의 값의 합을 저장
	printf("%f", z);
	//해당하는 서식 지정자 사용, 그리고 z 출력
}
