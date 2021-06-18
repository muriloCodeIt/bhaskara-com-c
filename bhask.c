#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a;
	int b;
	int c;
	int x;
	int delta;
	int final;
	int solve;
	int solve1;
	int bquadrado;
	int ac;
	int resultado;

	bquadrado = b*b;
	
	ac = a*c;

	final = 0;

	delta = bquadrado - 4*ac;

	resultado = delta;

	solve = (-b + sqrt(delta)) / 2 * a;

	solve1 = (-b - sqrt(delta)) / 2 * a; 

	printf("Neste programa, resolveremos equacoes de segundo grau.\n");
	printf("Insira o valor que sera multiplicado pelo x ao quadrado: \n");
	scanf("%d", &a);
	printf("Insira o valor que sera multiplicado pelo x: \n");
	scanf("%d", &b);
	printf("Por ultimo insira a parte numerica sem a parte literal: \n");
	scanf("%d", &c);
	
	if(resultado <= 0)
	{
       	printf("X nao possui resultado. Portanto, e vazio.");
    }
    else
    {
    	printf("O valor de delta e: %d\n", delta);
		printf("O valor do primeiro X e: %d\n", solve);
		printf("O valor do segundo X e: %d\n", solve1);
    }

	return 0;
}