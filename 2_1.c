//변수를 선언하고, 초기화하는 예제(2-1)
#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 5;
    
    printf("num1의 초기값은 %d이다.\n", num1);
    printf("num2의 초기값은 %d이다.\n", num2);
    
    //각각의 변수에 새로운 값을 저장합니다.
    num2 = 20;
    num1 = 15;
    
    printf("num1의 초기값은 %d이다.\n", num1);
    printf("num2의 초기값은 %d이다.\n", num2);

    return 0;
}