#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a = 0, b = 1, c;
int i;
int num;

int main(void){
	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &num);

	printf("%d, ", a);
	for(i = 1; i <= num; i++) {
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", a);
	}
}
