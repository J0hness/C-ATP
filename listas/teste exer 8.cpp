#include<stdio.h>
int main ()
{
    float salario,codigo = ,reajus,codigo1;
    
    printf("Digite seu codigo correspondente ao cargo.\n1-Escriturario\n2-Secretario\n3-Caixa\n4-Gerente\n5-Diretor\n");
    scanf("%f",&codigo);
    
    while (codigo > 0)
    {
        if (codigo == 1 )
        {
        	printf("Digite seu salario atual de Escriturario:\n");
        	scanf("%f",&salario);
        	reajus= salario + salario50/100;
        	printf("Direito a 50 porcento de reajuste sob o valor\nTotal = %.2f\n",reajus);
        }
        if (codigo == 2 )
        {
        	printf("Digite seu salario atual de Secretario:\n");
        	scanf("%f",&salario);
        	reajus= salario + salario35/100;
        	printf("Direito a 35 porcento de reajuste sob o valor\nTotal = %.2f\n",reajus);
        }
        if (codigo == 3)
        {
        	printf("Digite seu salario de Caixa\n");
        	scanf("%f",&salario);
        	reajus = salario + salario20/100;
        	printf("Direito a 20 porcento de reajust sob o valor\n WTotal = %.2f\n",reajus);
        }
        if (codigo == 4)
        {
        	printf("Digite seu salario de Gerente\n");
        	scanf("%f",&salario);
        	reajus = salario + salario10/100;
        	printf("Direito a 10 porcento de reajust sob o valor\nWTotal = %.2f\n",reajus);
        }
        if (codigo == 5)
        {
        	printf("Digite seu salario de Diretor\n");
        	scanf("%f",&salario);
        	reajus = salario = 0;
        	printf("Direito a 20 porcento de reajust sob o valor\nWTotal = %.2f\n",reajus);
        }
        
    printf("Digite seu codigo correspondente ao cargo.\n1-Escriturario\n2-Secretario\n3-Caixa\n4-Gerente\n5-Diretor\n");
    scanf("%f",&codigo);
    
    }

