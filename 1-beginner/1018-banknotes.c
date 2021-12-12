#include <stdio.h>
#include <stdlib.h>

int	*max_notes(int value)
{
	int *bank_note;

	bank_note = (int *)malloc(sizeof(int *) * 7);
	if (!bank_note)
		return (NULL);
	bank_note[0] = value / 100;
	value = value % 100;
	bank_note[1] = value / 50;
	value = value % 50;
	bank_note[2] = value / 20;
	value = value % 20;
	bank_note[3] = value / 10;
	value = value % 10;
	bank_note[4] = value / 5;
	value = value % 5;
	bank_note[5] = value / 2;
	value = value % 2;
	bank_note[6] = value / 1;
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
	int	value;
	int *bank_note;

	bank_note = NULL;
	scanf("%d", &value);
	bank_note = max_notes(value);
	printf("%d\n", value);
	printf("%d nota(s) de R$ 100,00\n", bank_note[0]);
	printf("%d nota(s) de R$ 50,00\n", bank_note[1]);
	printf("%d nota(s) de R$ 20,00\n", bank_note[2]);
	printf("%d nota(s) de R$ 10,00\n", bank_note[3]);
	printf("%d nota(s) de R$ 5,00\n", bank_note[4]);
	printf("%d nota(s) de R$ 2,00\n", bank_note[5]);
	printf("%d nota(s) de R$ 1,00\n", bank_note[6]);
	free(bank_note);
	return (0);
}
