// 문자형의 변수를 선언하고 아스키코드 값을 확인하는 예제(2-5)
// 2-4 예제는 실수 값의 소숫점폭 조절하는 예제라서 패스!
#include <stdio.h>

int main(void) {
    printf("소문자 a의 ASCII 값은 %d이다.\n", 'a');
    printf("소문자 b의 ASCII 값은 %d이다.\n", 'b');
    printf("소문자 c의 ASCII 값은 %d이다.\n", 'c');
    printf("소문자 a의 ASCII 값은 %d이다.\n", 'a');
    printf("대문자 A의 ASCII 값은 %d이다.\n", 'A');
    printf("대문자 B의 ASCII 값은 %d이다.\n", 'B');
    
    printf("ASCII 코드 97은 %c이다.\n", 97);
    printf("ASCII 코드 98은 %c이다.\n", 98);
    printf("ASCII 코드 99은 %c이다.\n", 99);
    return 0;
}