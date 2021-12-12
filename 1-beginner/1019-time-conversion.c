#include <stdio.h>

int	main(void)
{
	int	total_second;
	int	hour, minute, secund;

	hour = 0;
	minute = 0;
	secund = 0;

	scanf("%d", &total_second);
	hour = total_second / 3600;
	total_second = total_second % 3600;
	minute = total_second / 60;
	secund = total_second % 60;

	printf("%d:%d:%d\n", hour, minute, secund);
	return (0);
}
