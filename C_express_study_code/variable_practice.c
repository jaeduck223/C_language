//변수 선언 관련 예제 문제 -> 변수 선언 시, int 앞에 const 선언하면 안 됨!!!
#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 3;

	printf("변수 a의 초기값은 %d이다.\n", a);
	printf("변수 b의 초기값은 %d이다.\n", b);

	a = 10;
	b = 4;

	printf("변수 a의 값은 %d로 바뀌었다.\n",a);
	printf("변수 b의 값은 %d로 바뀌었다.\n",b);
	return 0;
}