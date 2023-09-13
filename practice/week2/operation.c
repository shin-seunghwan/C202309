#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;
	//변수 선언 및 초기화 

	z = x + y;
	printf("z = x + y = %d\n", z);
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);
	return 0;
}