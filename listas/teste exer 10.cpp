#include <stdio.h>

int main()
{
	int hr_trab, num_dep, hr_ex, codigo;
	float sal_min, val_hr, sal_mes, acr_dep, val_hrex, sal_bruto, sal_liq, sal_receber;
	
	printf("Código do funcionario:\n");
	scanf("%d", &codigo);
	while(codigo>0)
	{
		printf("Salarário mínimo:\n");
		scanf("%f", &sal_min),
		printf("Horas Trabalhadas:\n");
		scanf("%d", &hr_trab);
		printf("Número de dpendentes:\n");
		scanf("%d", &num_dep);
		printf("Quant. de horas extras:\n");
		scanf("%d", &hr_ex);
	
		val_hr = sal_min/5;
		sal_mes = val_hr*hr_trab;
		acr_dep = num_dep * 32.00;
		val_hrex = val_hr + val_hr*50/100;
		sal_bruto = sal_mes+acr_dep+val_hrex;
		
		if(sal_bruto < 200.00)
			sal_liq= sal_bruto - (sal_bruto*0);
		if(sal_bruto<=500.00)
			sal_liq= sal_bruto - ((sal_bruto*10)/100);
		if(sal_bruto>500.00)
			sal_liq= sal_bruto - ((sal_bruto*20)/100);
			
		if(sal_liq <= 350.00)
			sal_receber = sal_liq + 100.00;
		if(sal_liq > 350.00)
			sal_receber = sal_liq + 50.00;
		
		printf("o salario a receber e: %.2f\n", sal_receber);
		
		printf("Código do funcionario:\n");
		scanf("%d", &codigo);
	
	}
}
