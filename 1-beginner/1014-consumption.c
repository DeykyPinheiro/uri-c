#include <stdio.h>


double	average_consumption(int	km, double l)
{
	double mean;

	mean = km/l;
	return (mean);
}

int	main(void)
{
	int		km;
	double	l;
	double	mean;

	scanf("%d %lf", &km, &l);
	mean = average_consumption(km, l);

	printf("%.3lf km/l\n", mean);
	return (0);
}
