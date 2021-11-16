#include <stdio.h>


int	sum(int a, int b)
{
	return (a + b);
}

int	main(void)
{
	int	a;
	int	b;
	int	x;

	scanf("%d", &a);
	scanf("%d", &b);
	x  = sum(a, b);

	printf("X = %d\n", x);
	return (0);
}
