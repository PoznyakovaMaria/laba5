#include <locale.h>      
#include <stdio.h> 
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define k -4

int main() {

	setlocale(LC_ALL, "RUS");
	double gr;
	puts("������� ������");
	scanf_s("%lf", &gr);
	double rad = sin(gr * M_PI / 180);
	printf("�����: %.6lf\n", rad);

	float x, a, b, y;
	puts("������� �");
	scanf_s("%f", &x);
	a = log(-1 * k * x);
	b = exp(2 * x) + (a * x);
	y = x * ( a * a * a) + (b * b);
	printf("�����: y=%.1f\n", y);
	printf("(a=%f   b=%f)\n", a, b);

	int A = a, B = b, C = y;
	printf("������� � ����������: %i\n", A % 2 == 0 + B % 2 == 0);
	printf("������� B ����������: %i\n\n", A % 3 == 0 && B % 3 == 0 && C % 3 == 0);

}