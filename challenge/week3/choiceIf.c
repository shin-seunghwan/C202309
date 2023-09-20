#include <stdio.h>

int main()
{
	int choice;

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);
	//출력 하고 입력을 받는다 그리고 그 입력 받은 것을 choice에 넣는다.

	if (choice == 1) {
		printf("파일을 저장합니다.\n");
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.\n");
	}
	else if (choice == 3) {
		printf("종료합니다.\n");
	}
	else {
		printf("잘못 입력하셨습니다.\n");
	}
	//choice의 값이 1,2,3이라면 해당하는 문장을 출력 하고 
	//이외의것이라면 else이므로 그에 해당하는 문장 출력

	return 0;
}