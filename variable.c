//변수를 선언하고, 초기화하는 코드 -> 중간에 변수 값이 바뀜!
#include <stdio.h>

int main_6(void)
{
	int num1 = 10, num2 = 20;

	printf("num1의 초기값은 %d이다.\n", num1);
	printf("num2의 초기값은 %d이다.\n", num2);

	num2 = 5;
	num1 = 15;
	printf("num1의 새로운 값은 %d이다.\n", num1);
	printf("num2의 새로운 값은 %d이다.\n", num2);
	return 0;
}