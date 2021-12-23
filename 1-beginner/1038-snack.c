#include <stdio.h>

int main(void)
{
	double price[] = {4.0, 4.5, 5.0, 2.0, 1.5};
	int code;
	int	amount;
	double total;

	code = -1;
	amount = -1;
	total = 0;
	scanf("%d %d", &code, &amount);
	total = (amount * price[code - 1]);

	printf("Total: R$ %.2lf\n", total);
	return (0);
}
