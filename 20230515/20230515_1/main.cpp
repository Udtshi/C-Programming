#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
int main(void) {
	int x, y, larger;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	larger = max(x, y);
	printf("�� ū ���� %d�Դϴ�.", larger);
	return 0;
}