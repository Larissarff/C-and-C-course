#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	int valor1, valor2, valor3, multiplicado;
	
	printf("\n\tCalculando produtos: \n Digite tr�s valores para multiplica��o separados por v�rgulas: \n");
	scanf("%d, %d, %d", &valor1, &valor2, &valor3);
	
	multiplicado = valor1 * valor2 * valor3;
	
	printf("O valor da multiplica��o �: %d", multiplicado);
}
