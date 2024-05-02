	
#include <stdio.h>
#include <stdlib.h>


// int* pois � uma fun��o que retorna um ponteiro
int* alocaVetor(int tamanho){
	
	//Criando um ponteiro auxiliar
	int *aux;
	
	//Aloca��o din�mica de mem�ria
	aux = (int*) malloc(tamanho * sizeof(int));
	// sizeof(int) => o tamanho de um d�gito do tipo int
	
	if (aux == NULL) {
        printf("Erro ao alocar mem�ria!\n");
        exit(1); // Encerra o programa em caso de erro
    }
    
	//Retorna o ponteiro que aponta para a pimeira posi��o do vetor alocado
	return aux;
}

int main(){
	// Definindo vari�veis
	int *vetor, tamanho;
	
	//Lendo o tamanho do vetor
	printf("\n\t Digite um tamanho para o vetor: \n");
	scanf("%d", &tamanho);
	
	vetor = alocaVetor(tamanho);
	
	 for(int cont = 0; cont < tamanho; cont++)
        printf("%d\n", vetor[cont]);
		
	free(vetor);
	
	return 0;
}
