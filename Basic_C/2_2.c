// 정수형의 허용 범위와 오버플로우 현상을 관측하는 예제(2-2)
#include <stdio.h>
#include <math.h>  //pow 함수를 이용하기 위해 헤더 파일?을 불러온다고 함.

int main(void) {
    short a, b;
    unsigned short c;
    
        a = pow(2,15) - 1;
        b = pow(2, 15);
        c = pow(2, 15);  //오버플로우를 유도하는 부분입니다
    
    printf("a의 값은 %d이다.", a);
    printf("b의 값은 %d이다.", b);
    printf("c의 값은 %d이다.", c);
    // %d를 왜 printf()에 넣는지 이해가 안 감!!! 
    // -> 포맷 지정자의 개념으로, 여기에 정수를 넣겠다는 의미라고 함.
    // 포맷 지정자 (%d : 정수, %f : 실수, %c : 문자, %s : 문자열)
    return 0;
}