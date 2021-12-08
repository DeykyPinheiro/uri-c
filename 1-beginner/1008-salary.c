#include <stdio.h>

int	main(void)
{
	int		number;
	int		worked_hours;
	float	for_hour;

	scanf("%d", &number);
	scanf("%d", &worked_hours);
	scanf("%f", &for_hour);

	printf("NUMBER = %i\n", number);
	printf("SALARY = U$ %.2f\n", (for_hour * worked_hours));
	return (0);
}
