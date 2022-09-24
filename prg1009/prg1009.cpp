#include <stdio.h>

int main()
{
	char nome[30];
	double sal_fixo, vendas, total, comissao;
	
	scanf("%s", &nome);
	scanf("%lf", &sal_fixo);
	scanf("%lf", &vendas);
	
	comissao = vendas*15/100;
	
	total = sal_fixo + comissao;
	
	printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;	
	
}
