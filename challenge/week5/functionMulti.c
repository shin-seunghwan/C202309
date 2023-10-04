#include <stdio.h>

long multiF(long value);

void main()
{
	printf("1부터		2까지의 합은 %d\n", multiF(2));
	printf("1부터	3까지의 합은 %d\n", multiF(3));
	printf("1부터 5까지의 합은 %d\n", multiF(5));
	// 위의 문장들을 출력
}

long multiF(long value) ///hapf()에 들어간 값을 value에 넣는다
{
	long i;
	long multi = 1;
	//변수 선언 및 초기화

	for (i = 1; i <= value; i = i + 1)
	{
		multi = multi * i;
	}
	// i가 1 일 때 
	return multi;
}