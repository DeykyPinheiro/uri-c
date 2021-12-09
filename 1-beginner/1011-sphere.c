#include <stdio.h>
#include <math.h>

double sphere_volume(double R)
{
	double volume;
	double PI;

	PI = 3.14159;
	volume = (4.0/3.0) * PI * pow(R, 3.0);
	return (volume);
}

int	main(void)
{
	double	R;
	double	volume;

	scanf("%lf", &R);
	volume = sphere_volume(R);
	printf("VOLUME = %.3lf\n", volume);
	return (0);
}
