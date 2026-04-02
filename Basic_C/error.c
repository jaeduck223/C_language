/*
의도적으로 에러를 일으키는 예제
main.c: In function ‘main’:
main.c:13:10: error: assignment of read-only variable ‘num2’
   13 |     num2 = 20;
      |          ^
-> 이런 에러 메시지가 뜨는데 왜 뜨는지 분석해보는 것이 목표!
: 내 생각에는 상수 선언한 정수 num2의 값에 덮어쓰기를 시도해서 에러가 발생하는 것 같음!
에러 메시지를 읽을 줄 아는 것이 디버깅의 시작이라고 함...
*/
#include <stdio.h>

int main()
{
    int num1 = 10;
    const int num2 = 5;
    
    printf("num1의 초기값은 %d이다.\n", num1);
    printf("num2의 초기값은 %d이다.\n", num2);
    
    //각각의 변수에 새로운 값을 저장합니다.
    num2 = 20;
    num1 = 15;
    
    printf("num1의 초기값은 %d이다.\n", num1);
    printf("num2의 초기값은 %d이다.\n", num2);

    return 0;
}