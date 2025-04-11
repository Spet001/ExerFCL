#include<stdio.h>
#include<stdlib.h>

main()
{
	int n; //numero int
	char nome[20]; //characteres letras
	float salario,excedente; //decimal
	printf("CALCULANDO HORAS EXCEDENTES \n");
	printf("Entre com o primeiro nome do colaborador:");
	scanf("%s",&nome);
	printf("Entre com a quantidade de horas trabalhadas:");
	scanf("%i",&n);
	if(n>50)
		{
			salario=n*10;
			excedente=(n-50)*20;
		}
	else
		{
			salario=n*10;
			excedente=0;
		}
	printf("Colaborador:%s", nome);
	printf("\n Salario base=%2.f",salario);
	printf("\n Salario excedente=%2.f",excedente);
	
		
	
	
	
	
	
		
	
	
	
	
	
	

}
