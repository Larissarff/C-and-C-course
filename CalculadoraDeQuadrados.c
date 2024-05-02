#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, /* Usada para leitura da sequencia */
	    quadrado; /* Guarda o quadrado do numero lido */
	    
	printf("\n\tCalculo dos quadrados de uma sequencia de numeros\n"); /* \t significa t�tulo e centraliza */
	printf("\nEntre com uma sequencia de numeros inteiros nao-nulos seguida por 0:\n");
	scanf("%d", &numero);  /* No scanf, se fiz primeiro o formato do dado a ser lido e depois o nome da variavel aonde sera guardado */
	
	while (numero != 0){   /* fun�ao while: dizendo que o numero � diferente de 0*/
		quadrado = numero * numero;   /* atribuindo que o "quadrado" sera a opera��o de multiplica��o de um numero por ele mesmo */
		printf("O quadrado do numero %d e' %d\n", numero, quadrado);  /* No printf, est� o texto a ser expresso e os dois formatos correspondentes aos dois dados "numero"e "quadrado" que serao expressos*/
		scanf("%d", &numero);  
	}
	return 0;
}

