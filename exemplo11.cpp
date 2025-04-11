#include<stdio.h>
#include<stdlib.h>

main()
{
	float indice;
	printf("|||||||CONTROLE DE POLUICAO|||||||| \n");
	printf("Entre com indice de poluicao atual:");
	scanf("%f",&indice);
	if(indice<0.25)
		printf("Indice de poluicao aceitavel \n");
	else if(indice<0.31)
		printf("Suspernder as atividades empresas do primeiro grupo");
	else if(indice<0.41)
		printf("Suspender as atividades do segundo grupo");	
	else
		printf("Suspender as atividades do terceiro grupo");	
	
	
	
	
}
