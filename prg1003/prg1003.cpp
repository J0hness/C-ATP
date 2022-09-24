#include <stdio.h>

int main ()
{
	double a, b, teste;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	teste = ((a*3.5)+(b*7.5))/11;
	
	printf("teste = %.5lf\n", teste);
	
	return 0;
}
