#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, """");
	
	//Definindo variaveis
	float Nota1 = 0, Nota2 = 0, Nota3 = 0, Media;
	
	//Obtenc�o de dados
	printf("\n\tInsira suas notas do semestre:\n Insira a primeira nota: \n");
	scanf("%f", &Nota1);
	printf("\nInsira a segunda nota:\n");
	scanf("%f", &Nota2);
	printf("\nInsira a terceira nota:\n");
	scanf("%f", &Nota3);
	
    //Definindo a media
	Media = ((Nota1 + Nota2 + Nota3)/3);
	
	//Condicionais
	if(Media >= 7){
		printf("Voce est� aprovado com %.2f de m�dia", Media);
	}
	else{
		printf("Voce est� reprovado com %.2f de m�dia", Media);
	}
}
