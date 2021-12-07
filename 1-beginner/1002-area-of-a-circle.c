#include <stdio.h>
#include <math.h>


double	area_calculate(double R)
{
	double area;
	double	pi;

	pi = 3.14159;
	area = pi * pow(R, 2.0);
	return (area);
}


int	main(void)
{
	double R;

	scanf("%lf",&R);
	printf("A=%.4f\n", area_calculate(R));
	return (0);
}
