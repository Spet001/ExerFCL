#include<stdio.h>
#include<stdlib.h>

main()
{
	float cotacao,dolares,reais;
	printf("entre a cotacao do dolar:");
	scanf("%f",&cotacao);
	printf("entre com o valor em dolares:");
	scanf("%f",&dolares);
	reais=cotacao*dolares;
	printf("o valor eh:%2f",reais);
	
}
