#include <stdio.h>

int	main(void)
{
	char	name[20];
	double	fixed_salary;
	double	sales;
	double	total;

	sales = 0;
	total = 0;
	scanf("%s", name);
	scanf("%lf", &fixed_salary);
	scanf("%lf", &sales);

	total = fixed_salary + (sales * 0.15);
	printf("TOTAL = R$ %.2lf\n", total);
	return (0);
}
