#include<stdio.h>
#include<stdlib.h>

main()
{
	int a=4;
	int b=5;
	int c=6;
	int valor1=a++-b; //pré adciona e remove na mesma linha, pós adciona na proxima
	int valor2=++b+c++;
	int valor3=c++-b--; //++ adc1 -- remove 1
	printf("valor1=%i\n valor2=%i\n valor3=%i\n",valor1,valor2,valor3);
	printf("a=%i\n b=%i\n c=%i\n",a,b,c);





}
