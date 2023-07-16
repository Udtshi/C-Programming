#define _CRT_SECURE_NO_WARNINGS
#define No_Calibration_Point 5

#include <stdio.h>

double X[No_Calibration_Point] = { 100.0, 200.0, 300.0, 400.0, 500.0 };
double Y[No_Calibration_Point] = { -10.0, -5.0 ,0, 5.0, 10.0 };

double linear_mapping(double x)
{
    int i = 0, j = 0;

    double x1 = X[i];
    double y1 = Y[i];
    double x2 = X[i + 1];
    double y2 = Y[i + 1];
    double y;

        if (x < X[0])
        {
            i = 0;
        }
        else if (x > X[No_Calibration_Point - 1])
        {
            i = No_Calibration_Point - 2;
        }
        else
        {
            if (x == X[j])
            {
                x1, x2, y1, y2 = 0;
                y = Y[j];
            }
            else
            {
                for (int j = 0; j < No_Calibration_Point - 1; j++)
                {
                    if ((x > X[j]) && (x < X[j + 1])) 
                    {
                        i = j;
                        break;
                    }
                }
            }
        }

    y = y1 + (x - x1) * ((y2 - y1) / (x2 - x1));

	return y;
}

int main()
{
    double input_x = 0.0;

    printf("x���� �Է��ϼ���: ");
    scanf("%lf", &input_x);
    printf("%lf", linear_mapping(input_x));
}