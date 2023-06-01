#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_3_14(int solution, int answer){
	srand(unsigned(time(NULL)));

	double x_velocity = 10.0 + rand() % (5 + 1) - 3;
	double height_i = 50.0 + rand() % (10 + 1) - 5;
	double gravity_accel = 9.80;
	double distance = 20.0 + rand() % (5 + 1) - 3;
	double height_f_time = (distance / x_velocity);
	double height_f = height_i + 0.5 * -gravity_accel * pow(height_f_time, 2);
	
	printf("\n\n");
	printf("3-14 \n");
	printf("�������κ��� %6.2lf m�� ���̿��� �� �� A, B�� ���� %6.2lf m��ŭ\n", height_i, distance);
	printf("������ �ִ�. �� A�� %6.2lf m/s�� �ӷ����� ����������� ������ ���ÿ�,\n", x_velocity);
	printf("�� B�� �������� ��Ų�ٸ� �� ���� ������ ���� ���̴� �������κ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n\n");
		printf("�� ���� ������ ���� ���̴� �������κ��� ���ΰ�?\n\n");
		printf("��x: �̵��Ÿ�, v0x: x����� ó���ӵ�, t: �ð�,\n\n");
		printf("���� ������ ��x = v0x * t �Դϴ�.\n");
		printf("��x = v0x * t\n");
		printf("%6.2lf m = %6.2lf m/s * t\n\n", distance, x_velocity);

		printf("t = %6.2lfs\n\n", height_f_time);

		printf("y: ���߳���, y0: ó������, v0y: y����� ó���ӵ�, t: �ð�, a: �߷°��ӵ�\n\n");
		printf("���� ������ y = y0 + v0y * t + 1/2 * a * t^2 �Դϴ�.\n");
		printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� %6.2lf m/s^2�Դϴ�.\n", -gravity_accel);
		printf("y = y0 + v0y * t + 1/2 * a * t^2\n");
		printf("  = %6.2lf m + 0 + 1/2 * %6.2lf m/s^2 * t^2\n", height_i, -gravity_accel);
		printf("  = %6.2lf m\n\n", height_f);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("t = %6.2lf s\n", height_f_time);
		printf("y = %6.2lf m\n\n", height_f);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 3     ========================\n");
	printf("=================================================================\n");

	Excersize_3_14(1, 1);
}