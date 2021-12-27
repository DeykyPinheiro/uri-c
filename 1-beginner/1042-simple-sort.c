#include <stdio.h>
#include <stdlib.h>

int *copy_array(int *origin, int size)
{
	int *destiny;
	destiny = (int *)malloc(sizeof(int) * size);

	int i = 0;
	while (i < size)
	{
		destiny[i] = origin[i];
		i++;
	}
	return (destiny);
}

int *sort_values(int *values, int size)
{
	int i;
	int aux;
	int *sorted;

	i = 0;
	aux = 0;
	sorted = copy_array(values, size);
	while (i < size - 1)
	{
		if (sorted[i] > sorted[i + 1])
		{
			aux = sorted[i + 1];
			sorted[i + 1] = sorted[i];
			sorted[i] = aux;
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return (sorted);
}

int	main(void)
{
	int size = 3;
	int *values;
	int *sorted;
	int i, j, k;


	i = -1;
	j = -1;
	k = -1;
	values = (int *)malloc(sizeof(int) * size);

	while (++i < size)
		scanf("%d", &values[i]);
	sorted = sort_values(values, size);
	while  (++j < size)
		printf("%d\n", sorted[j]);
	printf("\n");
	while  (++k < size)
		printf("%d\n", values[k]);
	free(values);
	free(sorted);
	return (0);
}

