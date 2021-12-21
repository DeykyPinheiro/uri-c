#include <stdio.h>


int	is_valid_values(int a, int b,  int c,  int d)
{
	if (!(a % 2 == 0))
		return (0);
	else if (!((b > c) & (d > a)))
		return (0);
	else if (!(c + d > b + a))
		return (0);
	else if (!(c > -1 && d > -1))
		return (0);
	else
		return (1);
}

int main(void)
{
	int a, b, c, d;
	a = 0;
	b = 0;
	c = 0;
	d = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (is_valid_values(a, b, c, d))
		printf("Valores aceitos\n");
	else
		printf("Valores nao aceitos\n");
	return (0);
}
