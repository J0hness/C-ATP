#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, pi, atr, ac, atra, aq, ar;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	pi = 3.14159;
	atr = a*c/2;
	ac = pi*pow(c, 2);
	atra = (a+b)*c/2;
	aq = pow(b, 2);
	ar = a*b;
	
	printf("TRIANGULO: %.3lf\n", atr);
	printf("CIRCULO: %.3lf\n", ac);
	printf("TRAPEZIO: %.3lf\n", atra);
	printf("QUADRADO: %.3lf\n", aq);
	printf("RETANGULO: %.3lf\n", ar);
	
	return 0;
	
}
