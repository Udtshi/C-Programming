// 간단한 산수 계산기 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char op;
	int x, y, result;

	printf("수식을 입력하시오 (ex. 2 + 5) >> ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("지원되지 않는 연산자입니다. \n");
		break;
	}
	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}