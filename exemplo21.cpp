#include<stdio.h>
#include<stdlib.h>

main()
{
	int X=10;
	int A=20;
	int B=20;
	int C=B/X;
		if (X<A) {
			X=X%2;
			B=B/2;
			A=A+(B-X);
			C=C+1;}
		

	printf("a=%i\n b=%i\n c=%i\n X=%i\n",A,B,C,X);





}
