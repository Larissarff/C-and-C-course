#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");
	float valor1, valor2, diferenca;
	
	printf("\n\tCalculo do m�dulo da diferen�a: \nInsira o primeiro valor: \n");
	scanf("%f", &valor1);
	printf("\nInsira o segundo valor: \n");
	scanf("%f", &valor2);
	
	diferenca = abs(valor1 - valor2);
	printf("A diferen�a modular entre %.2f e %.2f � de: %.2f", valor1, valor2, diferenca);
}
