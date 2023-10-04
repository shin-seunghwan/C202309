#include <stdio.h>

int hapf(int value);

void main()
{
	printf("1부터		10까지의 합은 %d\n", hapf(10));
	printf("1부터	100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
	// 위의 문장들을 출력
}

int hapf(int value) //hapf()에 들어간 값을 value에 넣는다
{
	int i = 0;
	int hap = 0;
	//변수 선언 및 초기화

	while (i < value)
	{
		i = i + 1;
		hap = hap + i;
	}
	//i는 0부터 1씩 추가되면서 hap의 값도 i만큼 더해지는 반복문
	return hap;
	// hap 반환
}