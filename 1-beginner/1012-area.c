#include <stdio.h>
#include <math.h>

double	area_triangle(double base, double h)
{
	return ((base * h) / 2);
}

double area_circle(double R)
{
	double PI = 3.14159;
	double area;

	area = (PI * pow(R, 2));
	return (area);
}

double	area_trapezium(double lager_base, double minor_base, double h)
{
	double area;

	area = ((lager_base + minor_base) * h) / 2;
	return (area);
}

double	area_square(double b)
{
	return (pow(b, 2));
}

double	area_rectangle(double size_A, double size_B)
{
	double area;

	area = (size_A * size_B);
	return (area);
}

int	main(void)
{
	double	a, b, c;
	double	triangle;
	double	circle;
	double	trapezium;
	double	square;
	double	rectangle;

	a = 0;
	b = 0;
	c = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	triangle = area_triangle(a, c);
	circle = area_circle(c);
	trapezium = area_trapezium(a, b, c);
	square = area_square(b);
	rectangle = area_rectangle(a, b);

	printf("TRIANGULO: %.3lf\n", triangle);
	printf("CIRCULO: %.3lf\n", circle);
	printf("TRAPEZIO: %.3lf\n", trapezium);
	printf("QUADRADO: %.3lf\n", square);
	printf("RETANGULO: %.3lf\n", rectangle);
	return (0);
}
