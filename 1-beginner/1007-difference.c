#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);
	printf("DIFERENCA = %i\n", (a * b - c * d));
	return (0);
}