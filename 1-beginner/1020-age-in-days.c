#include <stdio.h>

int	main(void)
{
	int	age_in_days;
	int	year, month, day;

	year = 0;
	month = 0;
	day = 0;
	scanf("%d", &age_in_days);
	year = age_in_days / 365;
	age_in_days = age_in_days % 365;
	month = age_in_days / 30;
	age_in_days = age_in_days % 30;
	day = age_in_days;
	printf("%d ano(s)\n", year);
	printf("%d mes(es)\n", month);
	printf("%d dia(s)\n", day);
	return (0);
}
