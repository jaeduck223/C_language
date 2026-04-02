// 묵시적 형 변환과 명시적 형 변환을 실습하는 예제(2-6)
// 묵시적 형 변환은 컴파일러가 자동으로 자료형을 바꿔주는 것.(오토 기어 차량)
// 명시적 형 변환은 내가 직접 자료형을 바꿔주는 것.(수동 기어 차량)
#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c;
    float d = 5.6, e = 8.4, f;
    
    c = d + e;
    printf("c = d + e의 결과는 %.2f이다.\n", (float)c);
    
    f = d + e;
    printf("f = d + e의 결과는 %.2f이다.\n", f);
    
    f = d + (int)e;
    printf("f = d + (int)e의 결과는 %.2f이다.\n", f);
    
    return 0;
}