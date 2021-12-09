#include <stdio.h>

double	price_calculator(int quantity, double unit_price)
{
	return (quantity * unit_price);
}

int	main(void)
{
	int		code1, code2, q1, q2;
	double	p1, p2, t1, t2, total;

	code1 = 0;
	code2 = 0;
	q1 = 0;
	q2 = 0;
	p1 = 0;
	p2 = 0;
	t1 = 0;
	t2 = 0;
	total = 0;

	scanf("%d%d%lf", &code1, &q1, &p1);
	t1 = price_calculator(q1, p1);

	scanf("%d%d%lf", &code2, &q2, &p2);
	t2 = price_calculator(q2, p2);

	total = t1 + t2;
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return (0);
}
