#include <stdio.h>
#include <math.h>

double calculate_distance(double x1, double x2, double y1, double y2)
{
	double distance;

	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return (distance);
}

int	main(void)
{
	double x1, y1;
	double x2, y2;
	double distance;

	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);

	distance = calculate_distance(x1, x2, y1, y2);
	printf("%.4lf\n", distance);
	return (0);
}
