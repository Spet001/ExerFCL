#include<stdio.h>
#include<stdlib.h>
//Comissao para um vendedor
main()
{
	float com, total, price; //decimal numeros
	char vendedor[30]; //literal letras e numeros
	int cod, qtd; //inteiros numeros
	printf("Entre com o nome do vendedor"); //mostrar mensagem
	scanf("%s",&vendedor); //referenciar (%s mascara de entrada)
	printf("Entre com o codigo da peca vendida:");
	scanf("%i",&cod);
	printf("Entre com o valor unitario da peca:");
	scanf("%f",&price);
	printf("Entre com a quantidade:");
	scanf("%i",&qtd);
	total=price*qtd;
	com=total*0.05;
	printf("A comissao do vendedor %s eh: %3.2f", vendedor,com);
	
	
	
	
	
	
	
	
	
	
	
	
}
