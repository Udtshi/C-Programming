/*
4. 조건문 개념 배우기 (if~ else)

문제 : 변수 x에 20을 대입한 후, x의 값이 y의 값보다 큰 경우에 "x의 값이 y의 값보다 큽니다."를 출력하고, 
x의 값이 y의 값보다 작은 경우 "x의 값이 y의 값보다 작습니다."를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main(void) {
	int x, y;

	x = 20;
	y = 10;
	
	if (x > y) {
		printf("x의 값이 y의 값보다 큽니다.");
	}
	else {
		printf("x의 값이 y의 값보다 작습니다.");
	}
}