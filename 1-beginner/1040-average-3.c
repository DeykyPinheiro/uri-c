#include <stdio.h>

double	weighted_average(double a, double b, double c, double d)
{
	double average;

	average = 0;
	average = ((a * 2 + b * 3 + c * 4 + d * 1) / 10);
	return (average);
}

double	average(double a, double b)
{
	double average;

	average = ((a + b) / 2);
	return (average);
}

void	student_approval_exam(double weighted)
{
	if (weighted >= 5)
	{
		printf("Aluno aprovado.\n");
		printf("Media final: %.1lf\n", weighted);
	}
	else
	{
		printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n", weighted);
	}
}

void student_approval(double weighted)
{
	double exam;

	exam = 0;
	printf("Media: %.1lf\n", weighted);
	if (weighted >= 7)
	{
		printf("Aluno aprovado.\n");
	}
	else if (weighted >= 5)
	{
		printf("Aluno em exame.\n");
		scanf("%lf", &exam);
		printf("Nota do exame: %.1lf\n", exam);
		weighted = average(weighted, exam);
		student_approval_exam(weighted);
	}
	else
	{
		printf("Aluno reprovado.\n");
	}
}

int	main(void)
{
	double	a, b, c, d;
	double	weighted;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	weighted = 0;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	weighted = weighted_average(a, b, c, d);
	student_approval(weighted);
	return (0);
}
