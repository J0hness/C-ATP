#include <stdio.h>
int main()
{
	int idade;
	char gp_risco;
	
	printf("digite sua idade:\n");
	scanf("%d", &idade);
	
	
	while(idade>=18 && idade<=70)
	{
		
		printf("Digite seu grupo de risco:\n[B] Baixo\n[M] Medio\n[A] Alto\n");
		fflush(stdin);
		scanf("%c", &gp_risco);
		
		switch (gp_risco)
		{
			case'B': case'b':
				if(idade>=18 && idade<=24)
					printf("O c�digo do seguro �: 7\n");
				if(idade>=25 && idade<=40)
					printf("O c�digo do seguro �: 4\n");
				if(idade>=41 && idade<=70)
					printf("O c�digo do seguro �: 1\n");
				break;
				
			case'M': case'm':
				if(idade>=18 && idade<=24)
					printf("O c�digo do seguro �: 8\n");
				if(idade>=25 && idade<=40)
					printf("O c�digo do seguro �: 5\n");
				if(idade>=41 && idade<=70)
					printf("O c�digo do seguro �: 2\n");
				break;
				
			case'A': case'a':
				if(idade>=18 && idade<=24)
					printf("O c�digo do seguro �: 9\n");
				if(idade>=25 && idade<=40)
					printf("O c�digo do seguro �: 6\n");
				if(idade>=41 && idade<=70)
					printf("O c�digo do seguro �: 3\n");
				break;
			
		}
	
		printf("digite sua idade:\n");
		fflush(stdin);
		scanf("%d", &idade);
		
	}
	
}
