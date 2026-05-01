/*반복문 내에 블록을 사용해서 표현을 해보려고요!*/
#include <stdio.h>

int main()
{
    int i;
    for ( i=0; i<3; i++) 
    {
        printf("Hello.\n");
        printf("say Hello.\n");
    }
    
    printf("\n\n");
    
    for ( i=0; i < 3; i++)
        printf("Hello2.\n");
        printf("say Hello2.\n");
}

/*
블록을 사용하지 않는 경우에는 for 문 바로 다음 줄에만 for 반복이 적용되는게 포인트임.
*/