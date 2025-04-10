#include<stdio.h>
#include<stdlib.h>

//calcular IMC
main() 
{
	float imc,peso,altura;
	printf("Entre com seu peso:");
	scanf("%f",&peso);
	printf("Entre com sua altura:");
	scanf("%f",&altura);
	imc=peso/altura/altura;
	printf("Seu IMC=%.2f",imc); //%2.f para mostrar com 2 casas decimais
	if(imc<18) //se
		printf("  Palito ambulante");
	else if(imc<25)  //ou se
		printf("  Ta no shape");
	else if(imc<29)
		printf("  Ta ficando o gordo e calvo provavelmente");
	else if(imc<40)
		printf("   Baleia de nivel 1");
	else 
		printf("  Baleia suprema");
	
	
	
	
	
	
	
	
}
