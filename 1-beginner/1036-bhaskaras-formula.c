#include <stdio.h>
#include <math.h>


double bhaskara_r1(double a, double b, double c)
{
	double R;
	double delta;

	delta = ((b * b) - 4 * a * c);
	R = (-b + sqrt(delta)) / (2 * a);
	return (R);
}

double bhaskara_r2(double a, double b, double c)
{
	double R;
	double delta;

	delta = ((b * b) - 4 * a * c);
	R = (-b - sqrt(delta)) / (2 * a);
	return (R);
}

void calculete_bhaskara(double *R1, double *R2, double a, double b, double c)
{

	double delta;

	delta = ((b * b) - 4 * a * c);
	if (delta >= 0 && a != 0)
	{
		*R1 = bhaskara_r1(a, b, c);
		*R2 = bhaskara_r2(a, b, c);
		printf("R1 = %.5lf\n", *R1);
		printf("R2 = %.5lf\n", *R2);
	}
	else
		printf("Impossivel calcular\n");
}

int main(void)
{
	double a, b, c;
	double R1, R2;

	a = 0;
	b = 0;
	c = 0;
	R1 = 0;
	R2 = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	calculete_bhaskara(&R1, &R2, a, b, c);
	return (0);
}
