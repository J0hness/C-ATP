#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, delta, result1, result2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(delta>=0&&a!=0)
	{
	delta = pow(b,2)-4*a*c;
	result1 = ((-b+sqrt(delta))/(2*a));
	result2 = ((-b-sqrt(delta))/(2*a));
	printf("R1 = %.5lf\nR2 = %.5lf\n", result1, result2);
	//printf("R2 = %.5lf\n", result2);
	}
	else
	printf("Impossivel calcular\n");
	
	return 0;
 
}
