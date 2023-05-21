#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_9(int solution, int answer){
	double velocity = 100;
	double con_velocity = velocity / 3.6;
	double zero_back1 = 7.10;
	double con_accel_1 = (velocity / zero_back1);
	double zero_back2 = 11.2;
	double con_accel_2 = (velocity / zero_back2);

	printf("\n\n");
	printf("2-9 \n");
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %4.1lf s��� �Ѵ�.\n", zero_back1);
	printf("(���� ���¿��� ����Ͽ� �ӵ��� % 6.2lf km / h�� �����ϴ� �� �ɸ��� �ð�)\n\n", velocity);
	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %4.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
		printf("���� ������ a = ��v / ��t �Դϴ�.\n\n");
		printf("v:���߼ӵ�, v0:�ʱ�ӵ�, t:�ð�, a:���ӵ� \n\n");
		printf("km/h�� m/s�� ��ȯ�մϴ�\n");
		printf("%6.2lf km/h = %6.2lf km/h / (1000m / 1km * 1h / 3600s) = %6.2lf m/s\n\n", velocity, velocity, con_velocity);
		printf("a = ��v / ��t = (v - v0) / (t - 0)\n");
		printf("a = (%6.2lf m/s - 0 m/s) / %6.2lf s = %6.2lf m/s^2\n\n", con_accel_1, zero_back1, (con_accel_1 / zero_back1) );
	}


	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
			printf("(a) �� �ڵ����� ���ӵ� a = %6.2lf m/s^2\n\n", (con_accel_1 / zero_back1));
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(b) ��� �����ڵ����� ���ι��� %6.2lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
		printf("���� ������ a = ��v / ��t �Դϴ�.\n\n");
		printf("��v:���߼ӵ�, ��t:�ð�, a:���ӵ� \n");

		printf("a = ��v / ��t = (v - v0) / (t - 0)\n");
		printf("a = (%6.2lf m/s - 0 m/s) / %6.2lf s = %6.2lf m/s^2\n\n", con_accel_2, zero_back2, (con_accel_2 / zero_back2));
	}


	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("(b) ���ӵ� a = %6.2lf m/s^2\n\n", (con_accel_2 / zero_back2));
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

void Excersize_2_19(int solution, int answer)
{
	// ���� ���� ����
	double velocity = 120;
	double police_velocity = 0;
	double acceleration = 10;
	double converted_acceleration = 2.78;
	double distance = velocity / 3.6;
	double a, b, c = 0, d, e = 0.0;
	a = 0.5 * converted_acceleration;
	b = -1 * (velocity / 3.6);
	d = b * b - 4.0 * a * c;
	e = sqrt(d);


	printf("\n\n");
	printf("2-19 \n");
	printf("%.2lf km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n\n", velocity);
	printf("�� �������� ��� ������ ���ӵ� %.2lf km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);
	printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
		printf("���� ����: x = x0 + v0 * t + 1/2 * a * t^2 \n");
		printf("x:������ġ, x0:�ʱ���ġ, v0:�ʱ�ӵ�, t:�ð�, a:���ӵ� \n");
		printf("���� �����ڰ� t�ʰ� �޸� �Ÿ�:x1, �������� t�ʰ� �޸� �Ÿ�:x2\n\n");
		printf("ȥ�յ� ������ m/s�� ��ȯ\n");
		printf("a = %.2lf km/h/s = %.2lf km/h/s / (1000m / 1km * 1h / 3600s)= %.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

		printf("x1 = v0t + 1/2 * a * t^2 = (%.2lf m/s)t + 0 * t^2\n", velocity / 3.6);
		printf("x2 = x0 + v0t + 1/2 * a * t^2 = 0 m + 0 m/s * t + 1/2 * %.2lf * t^2 m\n\n", velocity / 3.6);

		printf("x1 = x2 = (%.2lf m/s)t = 1/2 * %.2lf m/s^2 * t^2\n", (velocity / 3.6), converted_acceleration, (acceleration / 3.6));
		printf("%.2lft^2 - %.2lft = 0\n", (acceleration / 3.6) / 2, velocity / 3.6);
		printf("t1 = %.2lf s, t2 = %.2lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
	}


	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			printf("(a) �������� ���� �����ڸ� ����� �� �ɸ� �ð� t = %.2lf s (t > 0)\n\n", (-b + e) / (2.0 * a));
			distance = distance * round((-b + e) / (2.0 * a));
		}
		else {
			printf("(a) �������� ���� �����ڸ� ����� �� �ɸ� �ð� t = %.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
			distance = distance * round((-b - e) / (2.0 * a));
		}
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");
		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
		printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x:�Ÿ���ȭ��\n\n");
		printf("v^2 - (0 m/s)^2 = 2 * %6.2lf m/s * %6.2lf m\n",converted_acceleration, distance);
		police_velocity = sqrt(2 * converted_acceleration * distance);
		printf("v = sqrt(2 * %.2lf m/s^2 * %.2lf m) = sqrt(%.2lf) m/s = %.2lf m/s\n\n", converted_acceleration, distance, 2 * converted_acceleration * distance, police_velocity);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		printf("(b) �������� �ӵ� v = %.2lf m/s = %.2lf km/h\n\n", police_velocity, police_velocity * 3.6);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

void Excersize_2_25(int solution, int answer)
{
	double velocity = 5.50;
	double height = 100;
	double gravity_accel = 9.80;
	double time = 0.0;

	double a, b, c = 0, d, e = 0.0;

	a = -gravity_accel / 2;
	b = velocity;
	c = height;
	d = b * b - 4.0 * a * c;
	e = sqrt(d);

	printf("\n\n");
	printf("2-25 \n");
	printf("�۸����Ͱ� %.2lf km/h�� �ӷ����� �����ϰ� �ö󰡰� �ִ�.\n", velocity);
	printf("�������κ��� %.lf m ���̿��� â���� ���� ���ڸ� ����߷ȴ�.\n\n", height);
	printf("�� ���ڰ� ���鿡 ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n\n");
		printf("�� ���ڰ� ���鿡 ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�?\n\n");
		printf("���� ������ y = y0 + v0t + 1/2 * a * t^2 �Դϴ�.\n");
		printf("y: ������ġ, y0: ó����ġ, v0: ó���ӵ�, t: �ð�, a: ���ӵ�\n\n");
		printf("y = y0 + v0t + 1/2 * a * t^2\n\n");
		printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� -%6.2lf �Դϴ�.\n", gravity_accel);

		printf("0 = %6.2lf + %6.2lf * t + 1/2 * %6.2lf * t^2\n\n", height, velocity , -gravity_accel);
		printf("1/2 * %.2lf m/s^2 * t^2 + %.2lf m/s * t + %.lf = 0\n\n", -gravity_accel, velocity, height);
		printf("t1 = %.1lf s, t2 = %.1lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
	}


	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			time = (-b + e) / (2.0 * a);
			printf("���ڴ� %.1lf �� �ڿ� ���鿡 �����մϴ�. (t > 0)\n\n", time);
		}
		else {
			time = (-b - e) / (2.0 * a);
			printf("���ڴ� %.1lf s �ڿ� ���鿡 �����մϴ�. (t > 0)\n\n", time);
		}
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
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_2_9(1, 1);
	Excersize_2_19(1, 1);
	Excersize_2_25(1, 1);
}