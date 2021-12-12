#include <stdio.h>


int	distance_spent(int time_in_hours, int average_speed)
{
	int distance;

	distance = time_in_hours * average_speed;
	return (distance);
}

int	main(void)
{
	int	time_in_hours;
	int	average_speed;
	int	km_per_liter;
	int distance;
	double liter;

	scanf("%d %d", &time_in_hours, &average_speed);
	km_per_liter = 12;
	distance = distance_spent(time_in_hours, average_speed);

	liter = (double)distance / (double)km_per_liter;
	printf("%.3lf\n", liter);
	return (0);
}

