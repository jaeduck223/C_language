// 실수형의 변수를 선언하고 초기화하는 예제(2-3)
#include <stdio.h>

int main(void)
{
    float a = 12.34;
    double b = 56.78;
    
    printf("float형 a의 값은 %f이다.", a);
    printf("float형 b의 값은 %lf이다.", b);
    
    printf("소수점 자릿수를 조정한 후의 값\n");
    printf("float형 a의 값은 %.2f이다.\n", a);
    printf("double형 b의 값은 %.3lf이다.\n",b);
    return 0;
}