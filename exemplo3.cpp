#include<stdio.h>
#include<stdlib.h>
main()
{
	int qtd_min,qtd_max,estq_medio;
	printf("Entre com a quantidade minima: \n");
	// /n pula linha
	scanf("%d",&qtd_min);
	printf("Entre com a quantidade maxima: \n");
	scanf("%d",&qtd_max);
	estq_medio=(qtd_min+qtd_max)/2;
	printf("Estoque medio=%d",estq_medio);
}
