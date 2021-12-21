#include <stdio.h>
#include <stdlib.h>

int	*max_notes(int value)
{
	int *bank_note;

	bank_note = (int *)malloc(sizeof(int *) * 12);
	if (!bank_note)
		return (NULL);
	bank_note[0] = value / 10000;
	value = value % 10000;
	bank_note[1] = value / 5000;
	value = value % 5000;
	bank_note[2] = value / 2000;
	value = value % 2000;
	bank_note[3] = value / 1000;
	value = value % 1000;
	bank_note[4] = value / 500;
	value = value % 500;
	bank_note[5] = value / 200;
	value = value % 200;
	bank_note[6] = value / 100;
	value = value % 100;
	bank_note[7] = value / 50;
	value = value % 50;
	bank_note[8] = value / 25;
	value = value % 25;
	bank_note[9] = value / 10;
	value = value % 10;
	bank_note[10] = value / 5;
	value = value % 5;
	bank_note[11] = value / 1;
	return (bank_note);
}

int is_value_validy(int value)
{
	if ((value > -1) && (value < 1000000))
		return (1);
	return (0);
}

int	main(void)
{
	double value;
	int *bank_note;

	bank_note = NULL;
	scanf("%lf", &value);
	value *= 100;
	bank_note = max_notes((int)value);
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", bank_note[0]);
	printf("%d nota(s) de R$ 50.00\n", bank_note[1]);
	printf("%d nota(s) de R$ 20.00\n", bank_note[2]);
	printf("%d nota(s) de R$ 10.00\n", bank_note[3]);
	printf("%d nota(s) de R$ 5.00\n", bank_note[4]);
	printf("%d nota(s) de R$ 2.00\n", bank_note[5]);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", bank_note[6]);
	printf("%d moeda(s) de R$ 0.50\n", bank_note[7]);
	printf("%d moeda(s) de R$ 0.25\n", bank_note[8]);
	printf("%d moeda(s) de R$ 0.10\n", bank_note[9]);
	printf("%d moeda(s) de R$ 0.05\n", bank_note[10]);
	printf("%d moeda(s) de R$ 0.01\n", bank_note[11]);
	free(bank_note);
	return (0);
}
