/*
문제 설명

두 정수 a, b가 주어질 때 다음과 같은 형태의 계산식을 출력하는 코드를 작성해 보세요.
a + b = c
  
제한사항
1 ≤ a, b ≤ 100
  
입출력 예
입력 #1
4 5

출력 #1
4 + 5 = 9
*/

#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if((1 <= a) && (b <= 100)){
        printf("%d + %d = %d",a, b, a + b);
    }
    else{
        printf("1 ≤ a, b ≤ 100");
    }
    
    return 0;
}
