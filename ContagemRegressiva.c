#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
	
	setlocale(LC_ALL,"");  // Adicionando o idioma local no printf
	
	int i, valor, aux = 0;
	
	printf("\n\t Digite um n�mero: ");
	scanf("\n%d", &valor);
	printf("\n O resto da divis�o de: ");
	
	for(i = 1; i <= valor; i++){
		
		if (valor % i == 0){
		aux = aux + 1 ;
	}
		printf("\n %d por %d = %d", valor, i, valor%i);
	}
	
	
	if (aux == 2){
		printf("\nO n�mero � primo pois possui %d divisores ", aux);
   	}
	else{
		printf("\nO n�mero  n�o � primo pois possui %d divisores ", aux);
	}
	

}

