#include<stdio.h>
#include<stdlib.h>

main()
{
	int n1,n2,n3,n4,q1,q2,q3,q4,soma;
	printf("Entre o primeiro:");
	scanf("%d", &n1);
	printf("Entre o segundo:");
	scanf("%d" ,&n2);
	printf("Entre o terceiro:");
	scanf("%d" ,&n3);
	printf("Entre o quarto:");
	scanf("%d" ,&n4);
	q1=n1*n1;
	q2=n2*n2;
	q3=n3*n3;
	q4=n4*n4;
	soma=q1+q2+q3+q4;
	printf("A soma eh:%d",soma);
	
}
