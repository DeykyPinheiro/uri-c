#include <stdio.h>
#include <math.h>

int	the_bigger(int a, int b)
{
	int	bigger;

	bigger = (a + b + fabs(a - b)) / 2;
	return (bigger);
}


int	main(void)
{
	int	a, b, c;
	int	bigger;

	scanf("%i %i %i", &a, &b, &c);
	bigger = the_bigger(a, b);
	bigger = the_bigger(bigger, c);

	printf("%i eh o maior\n", bigger);
	return (0);
}
